#include <iostream>
#include <vector>

//трябва да се намери абсолютната стойност на разликата между сбора на елементите на диагонала от горния ляв до долния десен ъгъл и диагонала от горния десен до долния ляв ъгъл

int main()
{
    int n;
    std::cin >> n;

    std::vector <std::vector<int>> matrix;

    int sumDiagonalOne = 0;
    int sumDiagonalTwo = 0;

    matrix.resize(n);
    for (int r = 0; r < n; r++)
    {
        matrix[r].resize(n);
        for (int c = 0; c < n; c++)
        {
            std::cin >> matrix[r][c];
        }

        sumDiagonalOne += matrix[r][r];
        sumDiagonalTwo += matrix[r][n-1-r];

    }

    int absoluteDiff = abs(sumDiagonalOne - sumDiagonalTwo);

    std::cout << absoluteDiff << std::endl;

    return 0;
}