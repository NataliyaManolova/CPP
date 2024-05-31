#include <iostream>
#include <vector>

//трябва да се намери сборът на диагонала от горния ляв до долния десен ъгъл

int main()
{
    int n;
    std::cin >> n;

    std::vector<std::vector<int>> matrix;

    int sumDiagonal = 0;

    matrix.resize(n);
    for (int r = 0; r < n; r++)
    {
        matrix[r].resize(n);
        for (int c = 0; c < n; c++)
        {
            std::cin >> matrix[r][c];
        }

        sumDiagonal += matrix[r][r]; //защото е диагонал в квадрат. Така че елементите ще са разположени на 0:0, 1:1, 2:2 и т.н.
    }

    std::cout << sumDiagonal << std::endl;

    return 0;
}