#include <iostream>
#include <vector>

//трябва да се намери първото появяване на търсения char в матрицата

int main()
{
    int n;
    std::cin >> n;

    std::vector<std::vector<char>> matrix;

    matrix.resize(n);

    for (int r = 0; r < n; r++)
    {
        matrix[r].resize(n);
        for (int c = 0; c < n; c++)
        {
            std::cin >> matrix[r][c];
        }
    }

    char symbol;
    std::cin >> symbol;

    for (int r = 0; r < n; r++)
    {
        for (int c = 0; c < n; c++)
        {
            if (matrix[r][c] == symbol)
            {
                std::cout << "(" << r << ", " << c << ")" << std::endl;
                return 0;
            }
        }
    }
    
    std::cout << symbol << " does not occur in the matrix" << std::endl;

    return 0;
}