#include <iostream>
#include <set>

//на конзолата се въвеждат определен брой usernames, които трябва да се изведат на козолата, но ако има дубликати трябва първо да се премахнат

int main()
{
    int numOfUsernames;
    std::cin >> numOfUsernames;

    std::set <std::string> allUsernames;

    while (numOfUsernames--)
    {
        std::string username;
        std::cin >> username;

        allUsernames.insert(username);
    }

    for (const std::string &username : allUsernames)
    {
        std::cout << username << std::endl;
    }

    return 0;
}