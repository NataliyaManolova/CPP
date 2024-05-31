#include <iostream>
#include <vector>
#include <queue>
#include <stack>

/* Това е матрица, която имитира зиг-заг движението на змията. Дава се една дума, чиито букви ще се вземат като char в матрицата.
Например: 5 6     - ще са редовете и колоните на матрицата
         computer - ще е думата
Изход:
         comput   - взимаме първите 6 букви за да запълним реда. Аз използвам queue за да мога след като използвам всяка буква да я изтрия и след това да я сложа отзад на опашката

         pmocre   - след това първите шест букви на опашната са ercomp, но тъй като кода имитира зиг-заг движението на опашката на змията, този ред трябва да се изпише наобратно. За целта използвам stack в който да сложа буквите, за да мога когато ги извикам за да ги сложа в матрицата, да ми идват в обратен ред.
         
         uterco   - тук взимам директно от queue
         retupm   - тук отново трябва да обърна реда
         comput   - тук пак взимам от queue  */

int main()
{
    int row, column;
    std::cin >> row >> column;

    std::vector<std::vector<char>> matrix;

    matrix.resize(row, std::vector<char>(column));

    std::string word;
    std::cin >> word;
    
    std::queue <char> tail;
    std::stack <char> reversedTail;

    for(int i = 0; i < word.size(); i++)
        tail.push(word[i]);


    for (int r = 0; r < row; r++)
    {   
        int number = column;

        for (int c = 0; c < column; c++)
        {   
            if (r % 2 == 0)
            {     
                char cur = tail.front(); tail.pop(); tail.push(cur);
                matrix[r][c] = cur;
            }
            else
            {
                while(number)
                {
                    char cur = tail.front(); tail.pop(); tail.push(cur);
                    reversedTail.push(cur);
                    number--;
                }

                char cur = reversedTail.top(); reversedTail.pop();
                matrix[r][c] = cur;
            }
        }
    }

    for (int r = 0; r < row; r++)
    {
        for (int c = 0; c < column; c++)
        {
            std::cout << matrix[r][c];
        }

        std::cout << std::endl;
    }

    return 0;
}