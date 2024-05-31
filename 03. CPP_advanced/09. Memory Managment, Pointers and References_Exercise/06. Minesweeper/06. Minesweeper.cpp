#include <iostream>

void printMineField(size_t x, size_t y, const char* field)
{
    for (size_t curRow = 0; curRow < y; curRow++)
    {
        for (size_t curCol = 0; curCol < x; curCol++)
        {
            std::cout << field[curRow * x + curCol];
        }

        std::cout << std::endl;
    }
}

int hasMine(size_t x, size_t y, const char* field, size_t totalCols)
{
    return field[y * totalCols + x] == '!' ? 1 : 0;
}

char numberOfMines(size_t x, size_t y, const char* field, size_t totalCols, size_t totalRows)
{
    char mines = '0';

    if (y > 0)
    {
        if (x > 0)
            mines += hasMine(x - 1, y - 1, field, totalCols);

        mines += hasMine(x, y - 1, field, totalCols);

        if (x < totalCols - 1)
            mines += hasMine(x + 1, y - 1, field, totalCols);
    }

    if (x > 0)
        mines += hasMine(x - 1, y, field, totalCols);

    mines += hasMine(x, y, field, totalCols);

    if (x < totalCols - 1)
        mines += hasMine(x + 1, y, field, totalCols);


    if (y < totalRows - 1)
    {
        if (x > 0)
            mines += hasMine(x - 1, y + 1, field, totalCols);

        mines += hasMine(x, y + 1, field, totalCols);

        if (x < totalCols - 1)
            mines += hasMine(x + 1, y + 1, field, totalCols);
    }

    return mines;
}

int main()
{
    size_t x, y;
    std::cin >> y >> x;

    char* minefield = new char[x * y];

    for (int i = 0; i < x * y; i++)
    {
        std::cin >> minefield[i];
    }

    char* digitfield = new char[x * y];

    for (size_t curRow = 0; curRow < y; curRow++)
    {
        for (size_t curCol = 0; curCol < x; curCol++)
        {
            digitfield[curRow * x + curCol] = numberOfMines(curCol, curRow, minefield, x, y);
        }
    }

    printMineField(x, y, digitfield);

    delete[] minefield;

    return 0;
}