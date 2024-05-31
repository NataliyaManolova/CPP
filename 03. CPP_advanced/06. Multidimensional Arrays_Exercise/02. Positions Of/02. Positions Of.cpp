#include <iostream>
#include <vector>

//трябва да се намери позицията/ите на едно число в предварително дадена матрица

int main()
{
    int row, column;
    std::cin >> row >> column;

    std::vector<std::vector<int>> matrix;
    matrix.resize(row, std::vector<int>(column));

    for (int r = 0; r < row; r++)
    {
        for (int c = 0; c < column; c++)
        {
            std::cin >> matrix[r][c];
        }
    }

    int number;
    std::cin >> number;

    bool isFound = false;
    for (int r = 0; r < row; r++)
    {
        for (int c = 0; c < column; c++)
        {
            if (matrix[r][c] == number)
            {
                std::cout << r << " " << c << std::endl;
                isFound = true;
            }
        }
    }

    if (!isFound)
        std::cout << "not found" << std::endl;

    return 0;
}