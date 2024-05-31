#include <iostream>
#include <sstream>

//приемаме числата като 'щум' и ги изпускаме. Взимаме всички останали символи и сравняваме коя поредица от символи(стрингове) имат по-дълга дължина и
//взимаме този с по-дългата дължина за краен отговор. НО, ако има два стринга с еднаква дължина, тогава взимаме първия символ на първия индекс и на
//двата стринга и сравняваме кой индекс има по-малка стойност в ASCII таблицата
//също така, ако има само цифри/шум виждаме, че minimumNoise.length() == 0, тоест е празен и принтираме "no noise"

int main()
{
    std::string sentence;
    getline(std::cin, sentence);

    std::istringstream stream(sentence);
    std::string str;
    
    std::string minimumNoise = "";

    while (stream >> str)
    {
        std::string currentNoise;

        for (int index = 0; index < str.length(); index++)
        {
            char c = str[index];

            if ( ! (c >= '0' && c <= '9'))
            {
                currentNoise += c;
            } 
        }

        if (currentNoise.length() > minimumNoise.length())
        {
            minimumNoise = currentNoise; //тук сравняваме кой стринг има най-голяма дължина и взимаме него
        }
        else if (currentNoise.length() == minimumNoise.length() && currentNoise < minimumNoise)
        {
            minimumNoise = currentNoise; //тук сравняваме, първият индекс на всеки два стринга и проверяваме, кой индекс носи по-малка стойност в ASCII таблицата
                                         //и взимаме него
        }
    }

    std::cout << (minimumNoise.length() == 0 ? "no noise" : minimumNoise) << std::endl;
}

