#include <iostream> 
#include <string> 
#include<math.h> 
#include<string>

int main() {

    std::string str;
    std::string number = "";
    getline(std::cin >> std::ws, str);

    // str = "y2d7fs4." 
    // "274"

    for (int i = 0; true; i++) {

        if (str[i] >= '0' && str[i] <= '9')
            number += str[i];

        if (str[i] == '.') 
            break;
    }

    std::cout << sqrt(stoi(number)) << std::endl;

    return 0;
}

