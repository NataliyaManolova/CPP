#ifndef SOLFEGE_NOTE_NAMING_H
#define SOLFEGE_NOTE_NAMING_H

#include<string>
#include "NoteName.h"

struct SolfegeNoteNaming
{
	NoteName operator () (const std::string& text) const
	{
		if (text == "Do")
			return NoteName('C');
		else if (text == "Re")
			return NoteName('D');
		else if (text == "Mi")
			return NoteName('E');
		else if (text == "Fa")
			return NoteName('F');
		else if (text == "Sol")
			return NoteName('G');
		else if (text == "La")
			return NoteName('A');
		else if (text == "Si")
			return NoteName('B');
		else
			return NoteName('?');
	}
};

#endif 
