#include <iostream>
#include <vector>
#include <climits>

//Има една матрица и в нея трябва да се намери 3х3 квадрата с най-голям сбор на елементите

int main()
{
    int row, column;
    std::cin >> row >> column;

    std::vector <std::vector<int>> m;

    m.resize(row, std::vector<int>(column));

    for (int r = 0; r < row; r++)
    {
        for (int c = 0; c < column; c++)
        {
            std::cin >> m[r][c];
        }
    }

    int maxNum = INT_MIN;
    int curRow = 0; 
    int curColumn = 0;

    for (int r = 0; r < row-2; r++) //тъй като всеки елемент ще го събирам с елементите на отсрещните две колони и долните два реда
    {
        for (int c = 0; c < column-2; c++)
        {
            // може да се напише фукция и в нея да се използва същия вложен for цъкъл като този на следващите редове, само че за сумиране
            int curNum =
                m[r][c] + m[r][c + 1] + m[r][c + 2] +
                m[r + 1][c] + m[r + 1][c + 1] + m[r + 1][c + 2] +
                m[r + 2][c] + m[r + 2][c + 1] + m[r + 2][c + 2];

            if (maxNum < curNum)
            {
                maxNum = curNum;
                curRow = r;
                curColumn = c;
            }
        }
    }
   
    std::cout << "Sum = " << maxNum << std::endl;
    for (int r = curRow; r < curRow + 3; r++)
    {
        for (int c = curColumn; c < curColumn + 3; c++)
        {    
            std::cout << m[r][c] << " ";
        }  

        std::cout << std::endl;
    }


    return 0;
}