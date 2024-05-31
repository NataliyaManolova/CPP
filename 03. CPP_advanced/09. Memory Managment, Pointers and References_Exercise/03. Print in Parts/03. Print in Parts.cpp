#include <iostream>

int main()
{
    int rows, cols;
    std::cin >> rows >> cols;

    int* array;

    array = new int[rows * cols];

    for (int count = 0; count < rows * cols; count++)
        std::cin >> array[count];

    int wantedRows, wantedCols;
    std::cin >> wantedRows >> wantedCols;

    for (int curRow = 0; curRow < wantedRows; curRow++)
    {
        for (int curCol = 0; curCol < wantedCols; curCol++)
        {
            //int num1 =  curRow* cols;
            //int num2 =  curCol;
            //int num3 =  curRow* cols + curCol;

            std::cout << array[curRow * cols + curCol] << " ";
        }

        std::cout << std::endl;
    }

    delete[] array;

    return 0;
}