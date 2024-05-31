#include <iostream>
#include <vector>

/*Трябва да се прочетат всички диагонали в една матрица но наобратно.
 Например: 10 12 13 14   тук отговорът ще е: 22
           15 16 17 18                       21 18
           19 20 21 22                       20 17 14
                                             19 16 13
                                             15 12
                                             10
 */

int main()
{
    int row, column;
    std::cin >> row >> column;

    std::vector<std::vector<int>> m;

    m.resize(row, std::vector<int>(column));

    for (int r = 0; r < row; r++)
        for (int c = 0; c < column; c++)
            std::cin >> m[r][c];

    std::vector<std::vector<int>> newMatrix;

    for (int r = row-1; r >= 0; r--) //чета матрицата отзад напред
    {
        for (int c = column-1; c >= 0; c--)
        {   
            std::vector<int> curMatrix;

            int curR = r;
            int curC = c;
        
            if (r == row-1 || c == 0) // имаме нов диагонал само ако започва от най-долният ред или ако започва от първата колона
                                      //за сравнение, ако почвахме от левия връх на матрицата, щяхме да взимаме нов диагонал ако започваше от първия ред или ако започваше от последната колона на който и да е ред.
            {
                while (curR >= 0 && curC != column) //докато има още редове нагоре и колони надясно взимаме число
                {  
                    curMatrix.push_back(m[curR][curC]); 
                    curR--;
                    curC++;    
                }

                newMatrix.push_back(curMatrix);
            }
            
        }
    }

    for (std::vector<int> numbers : newMatrix)
    {
        for (int number : numbers)
        { 
            std::cout << number << " ";
        }

        std::cout << std::endl;
    }

    return 0;
}