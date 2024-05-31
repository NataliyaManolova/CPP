#include <iostream>
#include <vector>

int main()
{
    int rows, columns;
    std::cin >> rows >> columns;

    std::vector<std::vector<int>> matrix;
   
    std::vector <int> sumColumn;
    sumColumn.resize(columns);

    matrix.resize(rows);
    for (int r = 0; r < rows; r++)
    {
        matrix[r].resize(columns);
        for (int c = 0; c < columns; c++)
        {
            std::cin >> matrix[r][c];

            sumColumn[c] += matrix[r][c];
        }
    }

    for (int sum : sumColumn)
        std::cout << sum << std::endl;

    return 0;
}