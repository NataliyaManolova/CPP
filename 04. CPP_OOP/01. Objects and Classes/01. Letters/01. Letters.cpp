#include <iostream>
#include <sstream>
#include <set>
#include <algorithm>

using namespace std;

class Letters {

private:
    typedef set<string> Words;

    Words words;

    void cleanWord(string& word);

public:

    Letters(const string& theLine);

    string getWordsContaining(char c);
};

Letters::Letters(const string& theLine) {

    string curWord;
    istringstream istr(theLine);
    while (istr >> curWord) {
        cleanWord(curWord);
        words.insert(curWord);
    }
}

char asciiToUpper(char c) {
    if (c >= 'a')
        c -= ('a' - 'A');

    return c;
}

string Letters::getWordsContaining(char c) {

    ostringstream ostr;

    c = asciiToUpper(c);

    for (const string& s : words) {
        string transformed = s;
        transform(transformed.begin(), transformed.end(), transformed.begin(), asciiToUpper);

        if (transformed.find(c) != string::npos) {
            ostr << s << ' ';
        }
    }

    return ostr.str();
}

void Letters::cleanWord(string& word) {

    for (string::iterator itCur = word.begin(); itCur != word.end();) {
        if (isalpha(*itCur))
            itCur++;
        else {
            itCur = word.erase(itCur);
        }
    }

}

int main(void) {

    string buffer;
    getline(cin, buffer);

    Letters l(buffer);

    char curChar;
    cin >> curChar;
    while (curChar != '.') {

        string containedWords = l.getWordsContaining(curChar);

        if (containedWords.size() == 0)
            containedWords = "---";

        cout << containedWords << endl;
        cin >> curChar;
    }

    return 0;
}