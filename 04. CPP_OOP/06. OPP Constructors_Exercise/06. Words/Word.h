#ifndef WORD_H
#define WORD_H

#include <sstream>
#include <string>

#include <map>

class Word
{
	std::string word;
	static std::map<std::string, size_t> counting;

public:
	Word(const std::string & word) : word(word)
	{
		counting[word]++;
	}
	
	const std::string & getWord() const { return word; }

	size_t getCount() const 
	{
		size_t count = counting[word];
		counting.erase(word);
		return count;
	}

	bool operator < (const Word& other) const {
		return word < other.word;
	}

	//friend std::ostream& operator<<(std::ostream& out, const Word& w);
}; 

#endif