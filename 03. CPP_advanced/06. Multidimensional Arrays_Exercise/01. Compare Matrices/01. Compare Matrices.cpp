#include <iostream>
#include <vector>
#include <sstream>

//трябва да се сравнят две матрици дали са еднакви

void readRowsAndColumns(std::istream &input, int &rows, std::vector<int> &allColumns)
{
    input >> rows; std::cin.ignore();
    std::string columns;

    for(int r = 0; r < rows; r++)
    {
        std::getline(std::cin, columns);
        std::istringstream stream(columns);
        int number;

        while (stream >> number)
            allColumns.push_back(number);
    }
}

void readMatrix(int rows, std::vector<int> &columns, std::vector<std::vector<int>> &matrix)
{
    matrix.resize(rows);
    for (int r = 0; r < rows; r++)
    {
        matrix[r].resize(columns.size());
        for (int c = 0; c < columns.size(); c++)
        {
            matrix[r][c] = columns[c];
        }
    }
}

int main()
{
    int rows1, rows2;

    std::vector<int> columns1;
    std::vector<int> columns2;

    readRowsAndColumns(std::cin, rows1, columns1);
    readRowsAndColumns(std::cin, rows2, columns2);

    std::vector<std::vector<int>> matrix1;
    std::vector<std::vector<int>> matrix2;

    readMatrix(rows1, columns1, matrix1);
    readMatrix(rows2, columns2, matrix2);

    if (matrix1 == matrix2)
        std::cout << "equal" << std::endl;
    else
        std::cout << "not equal" << std::endl;

    return 0;
}