#include <iostream>
#include <list>
#include <sstream>

class SentenceShifter {
    private:
        typedef std::list<std::string> allWords;
        allWords words;

    public:
        SentenceShifter(const std::string theWords);
        std::string getShiftedSequence(void);

        void shift(void)
        {
            words.push_front(words.back());
            words.pop_back();
        }

        void shift(int count)
        {
            for (;count > 0; count--)
            {
                shift();
            }
        }
};

SentenceShifter::SentenceShifter(const std::string theWords)
{
    std::istringstream stream(theWords);
    std::string cur;

    while (stream >> cur)
    {
        words.push_back(cur);
    }
}

std::string SentenceShifter::getShiftedSequence(void)
{
    std::ostringstream ostr;

    for (std::string word : words)
    {
        ostr << word << std::endl;
    }

    return ostr.str();
}

int main()
{
    std::string buffer;
    std::getline(std::cin, buffer);

    SentenceShifter ss(buffer);

    int count;
    std::cin >> count;
    ss.shift(count);

    std::cout << ss.getShiftedSequence();

    return 0;
    
 }