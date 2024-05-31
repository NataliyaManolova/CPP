#include <iostream>
#include <sstream>

void readMatrix(int**& matrix, size_t& rows, size_t& cols)
{
    std::cin >> rows; std::cin.ignore();
    matrix = new int* [10];

    for (size_t curRow = 0; curRow < rows; curRow++)
    {
        matrix[curRow] = new int[10]; //за всеки row

        std::string strRow;
        std::getline(std::cin, strRow);
        std::istringstream stream(strRow);

        cols = 0;

        while (stream >> matrix[curRow][cols])
            cols++;
    }
}

void freeMatrix(int** &matrix) //& ???
{
    for (int i = 0; i < 10; i++)
    {
        delete[] matrix[i];
    }

    delete[] matrix;
}

bool compareMatrices(int** matrix1, size_t mat1rows, size_t mat1cols, 
                     int** matrix2, size_t mat2rows, size_t mat2cols)
{
    if (mat1rows != mat2rows || mat1cols != mat2cols)
        return false;

    for (size_t curRow = 0; curRow < mat1rows; curRow++)
    {
        for (size_t curCol = 0; curCol < mat1cols; curCol++)
        {
            if(matrix1[curRow][curCol] != matrix2[curRow][curCol])
                return false;
        }
    }

    return true;
}

int main()
{
    size_t mat1rows, mat1cols;
    int** matrix1;
    readMatrix(matrix1, mat1rows, mat1cols);

    size_t mat2rows, mat2cols;
    int** matrix2;
    readMatrix(matrix2, mat2rows, mat2cols);

    std::cout << (compareMatrices(matrix1, mat1rows, mat1cols, matrix2, mat2rows, mat2cols) ? "equal" : "not equal") << std::endl;

    freeMatrix(matrix1);
    freeMatrix(matrix2);

    return 0;
}