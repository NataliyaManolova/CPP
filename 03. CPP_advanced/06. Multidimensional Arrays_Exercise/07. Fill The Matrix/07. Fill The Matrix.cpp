#include <iostream>
#include <sstream>
#include <vector>
#include <stack>

/*Трябва да се създаде матрица с равни колони и редове, която да се запълва сама от 1 нагоре. Като има две команди А и В.
Например ако имаме 3, А :  1 4 7        Ако имаме 3, В:  1 6 7
                           2 5 8                         2 5 8
                           3 6 9                         3 4 9
*/

int main()
{
    int size;
    std::string input;
    std::getline(std::cin, input, ',');
    size = stoi(input);
    char command;
    std::cin >> command;



    std::vector<std::vector<int>> matrix;

    matrix.resize(size, std::vector<int>(size));
 
    int c = 0;
    int r = 0;
    int direction = 1;
    for (int num = 1; num <= size * size; num++)
    {
        matrix[r][c] = num;
        r += direction;

        if (command == 'A')
        {

            if (r >= size) //означава, че сме запълнили колоната по редове и е време да отидем на следващата колона
            {
                c++;
                r = 0;
            }
        }
        else if (command == 'B')
        {
            if (r < 0 || r >= size)
            {
                c++;

                if (direction > 0)
                {
                    r = size - 1;
                    direction = -1;
                }
                else
                {
                    r = 0;
                    direction = 1;
                }

            }
        }
    }

    for (int r = 0; r < size; r++)
    {
        for (int c = 0; c < size; c++)
        {
            std::cout << matrix[r][c] << " ";
        }

        std::cout << std::endl;
    }


    return 0;
}