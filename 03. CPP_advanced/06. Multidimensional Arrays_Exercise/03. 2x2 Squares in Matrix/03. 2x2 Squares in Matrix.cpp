#include <iostream>
#include <vector>

/*дадена е една матрица от char - ове.Целта е да се намерят всички 2х2 квадратчета в тази матрица където char са едни и същи
  Например A A B C - тук има два пъти 2х2 с A и веднъж с D. Тоест отговорът е 3. 
           A A D D
           A A D D  */

int main()
{
    int rows, columns;
    std::cin >> rows >> columns;

    std::vector<std::vector<char>> matrix;

    matrix.resize(rows, std::vector<char>(columns));

    for (int r = 0; r < rows; r++)
    {
        for (int c = 0; c < columns; c++)
        {
            std::cin >> matrix[r][c];
        }
    }

    int count = 0;

    for (int r = 0; r < rows-1; r++) //един ред и една колона по малко, защото за да намеря 2*2 квадратите, сравнявам всеки елемент с елементите на реда под него и елементите на дясната колоната до него. Ако е последната колона и ред, ще възникне грешка в кода.
    {
        for (int c = 0; c < columns-1; c++)
        {
            if (matrix[r][c] == matrix[r][c + 1] && matrix[r][c] == matrix[r+1][c] && matrix[r][c] == matrix[r + 1][c + 1])
                count++;
        }
    }

    std::cout << count << std::endl;

    return 0;
}

/*
  При примера:
  A A B C
  A A D D
  A A D D
  
  Пръ първата обиколка във for цикъла:
  matrix[r][c] = А
  matrix[r][c + 1] = А
  matrix[r + 1][c] = А
  matrix[r + 1][c + 1] = А
  */