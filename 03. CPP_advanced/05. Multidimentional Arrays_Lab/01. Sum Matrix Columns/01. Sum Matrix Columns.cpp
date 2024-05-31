#include <iostream>
#include <vector>

//трябва да се сметне сборът на елементите по колони

int main()
{
    int rows, columns;
    std::cin >> rows >> columns;

    std::vector<std::vector<int>> matrix;

    matrix.resize(rows);
    for (int r = 0; r < rows; r++)
    {
        matrix[r].resize(columns);
        for (int c = 0; c < columns; c++)
        {
            std::cin >> matrix[r][c];
        }
    }

    std::vector <int> sumColumn;
    sumColumn.resize(columns);

    for (int c = 0; c < columns; c++)
    {
        for (int r = 0; r < rows; r++)
        {
            sumColumn[c] += matrix[r][c];
        }
    }

    for (int sum : sumColumn)
        std::cout << sum << std::endl;

    return 0;

    /*
    for (int c = 0; c < columns; c++)
    {    
        int sumColumn = 0;

        for (int r = 0; r < rows; r++)
        {
            sumColumn += matrix[r][c];
        }

        std::cout << sumColumn << std::endl;
    }*/
}