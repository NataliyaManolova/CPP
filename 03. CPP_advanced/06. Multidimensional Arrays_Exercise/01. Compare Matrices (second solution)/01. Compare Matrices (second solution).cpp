#include <array>
#include <iostream>
#include <sstream>

void readMatrix(std::istream & input, std::array<std::array<int, 10>, 10> &matrix, int &rows, int &columns)
{
    input >> rows; std::cin.ignore();

    for (int r = 0; r < rows; r++)
    {
        std::string col;
        std::getline(input, col);
        std::istringstream stream(col);

        columns = 0;
        while (stream >> matrix[r][columns])
            columns++;
    }
}

bool compareMatrices(
    std::array<std::array<int, 10>, 10> matrix1, int rows1, int columns1,
    std::array<std::array<int, 10>, 10> matrix2, int rows2, int columns2)
{
    if (rows1 != rows2 || columns1 != columns2)
        return false;

    for (int r = 0; r < rows1; r++)
    {
        for (int c = 0; c < columns1; c++)
        {
            if (matrix1[r][c] != matrix2[r][c])
                return false;
        }
    }

    return true;
}

int main()
{
    int rows1, rows2, columns1, columns2;

    std::array<std::array<int, 10>, 10> matrix1;
    std::array<std::array<int, 10>, 10> matrix2;

    readMatrix(std::cin, matrix1, rows1, columns1);
    readMatrix(std::cin, matrix2, rows2, columns2);

    std::cout << (compareMatrices(matrix1, rows1, columns1, matrix2, rows2, columns2) ? "equal" : "not equal") << std::endl;

    return 0;
}