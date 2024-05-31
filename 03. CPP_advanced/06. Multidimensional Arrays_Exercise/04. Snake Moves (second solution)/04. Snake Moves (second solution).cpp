#include <iostream>
#include <vector>

int main()
{
    int row, column;
    std::cin >> row >> column;

    std::vector<std::vector<char>> matrix;
    matrix.resize(row, std::vector<char>(column));

    std::string snake;
    std::cin >> snake;

    int index = 0;
    int direction = 1;
    int c = 0;

    for (int r = 0; r < row; r++)
    {
        while (true)
        {
            matrix[r][c] = snake[index];
            
            index++;
            if (index >= snake.length()) //вървим по цялата дължина да думата; може да се замести с queue където да се слага всяка следваща буква най-отзад на опашката след като бъде използвана
                index = 0;

            c += direction;

            if (c < 0 || c >= column)
            {
                if (direction > 0)
                {
                    c = column - 1;
                    direction = -1;
                }
                else
                {
                    c = 0;
                    direction = 1;
                }

                break;
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