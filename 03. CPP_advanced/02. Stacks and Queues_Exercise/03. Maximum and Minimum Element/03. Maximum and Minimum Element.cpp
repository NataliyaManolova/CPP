#include <iostream>
#include <stack>
#include <climits>

// на първият ред на конзолата се подава едно число, което ще представлява броят команди. След това следват комадите една след друга. Ако комадата е 1, след единицата ще има още едно число на същият ред. Това е число, която трябва да се сложи в стака. Команда 2, трие последното число в стака. Команда 3 печата най-голямото число в стака, без да броим предходните изтрити числа. Комада 4 печата най-малкото число в стака, отново бе да броим числата, които са били изтрити. Накрая, когато подадем всички команди, се печатат всички числа, които са останали в стака. 

int main()
{
    int numberOfCommands;
    std::cin >> numberOfCommands;

    std::stack <int> allNum;
    std::stack <int> historyOfMin; //тук ще записваме всяко ново число, което е по-малко от предходното
    std::stack <int> historyOfMax; //тук ще записваме всяко ново число, което е по-голямо от предходното

    int curMin = INT_MAX;
    int curMax = INT_MIN;

    while (numberOfCommands--)
    {
        int command;
        std::cin >> command;

        switch (command)
        {
        case 1:
                int newNum;
                std::cin >> newNum;
                allNum.push(newNum);

                if (newNum >= curMax) //проверяваме дали новото число е по-голямо от предходното, като ако новото число е равно на предходното най-голямо число, то това число пак ще бъде записано
                {
                    curMax = newNum;
                    historyOfMax.push(newNum); //записваме новото число най-отгоре на стака
                }

                //прилагам същата логика тук, но за най-малкото число
                if (newNum <= curMin)
                {
                    curMin = newNum;
                    historyOfMin.push(newNum);
                }

                break;

        case 2:
                if (allNum.empty())
                    continue;

                if (allNum.top() == historyOfMin.top()) //ако числото което трием от общия стак е равно на най-малкото число до тук, тогава трябва да изтрием и него
                {
                    historyOfMin.pop();

                    if (historyOfMin.size())
                    {
                        curMin = historyOfMin.top(); //ако в стака с най-малките числа, има предходно число, което сме записали, приравняваме curMin на него.
                    }
                    else
                    {
                        curMin = INT_MAX; // ако стака с най-малките числа е празен, тогава трябва да започнем да търсим ново най-малко число. Тоест независимо от размера на следващото числото, то ще бъде взето като най-малкото число, защото няма да има друго преди него.
                    }
                }

                //прилагам същата логика тук
                if (allNum.top() == historyOfMax.top())
                {
                    historyOfMax.pop();

                    if (historyOfMax.size())
                    {
                        curMax = historyOfMax.top();
                    }
                    else
                    {
                        curMax = INT_MIN;
                    }
                }

                allNum.pop();
                break;

        case 3:
                if (allNum.empty())
                    continue;

                std::cout << historyOfMax.top() << std::endl;

                break;

        case 4:
                if (allNum.empty())
                    continue;

                std::cout << historyOfMin.top() << std::endl;

                break;
        }
    }

    bool firstNum = true;

    while (allNum.size())
    {
        if (firstNum)
        {
            std::cout << allNum.top();
            firstNum = false;
        }
        else
        {
            std::cout << ", " << allNum.top();
        }

        allNum.pop();
    }
}
/*
9
1 97
2
1 20
2
1 26
1 20
3
1 91
4
*/