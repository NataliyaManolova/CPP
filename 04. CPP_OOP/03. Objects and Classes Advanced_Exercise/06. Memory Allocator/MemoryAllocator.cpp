#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include "Defines.h"

int* const deallocated = nullptr;
int* const allocated = ((int*)nullptr) + 1;

ErrorCode executeCommand(const std::string& command, std::vector<int*>& memory)
{
	std::istringstream istr(command);
	std::string com;
	istr >> com;

	if (com == "Idle")
		return ErrorCode::EXECUTE_IDLE;
	
	int memoryIndex;
	istr >> memoryIndex;

	if (memoryIndex >= memory.size())
		return ErrorCode::INDEX_OUT_OF_BOUND;

	if (com == "Allocate")
	{
		if (memory[memoryIndex] == allocated)
		{
			return ErrorCode::MEMORY_LEAK;
		}

		memory[memoryIndex] = allocated;
	}
	else
	{
		if (memory[memoryIndex] == deallocated)
		{
			return ErrorCode::DOUBLE_FREE;
		}

		memory[memoryIndex] = deallocated;
	}

	return ErrorCode::EXECUTE_SUCCESS;
}

void printResult(const ErrorCode errorCode, const std::string& command)
{
	std::string message;

	switch (errorCode)
	{
	case ErrorCode::EXECUTE_SUCCESS:
		message = "success"; break;
	case ErrorCode::EXECUTE_IDLE:
		message = "this exam is a piece of cake! Where is the OOP already?!?"; break;
	case ErrorCode::MEMORY_LEAK:
		message = "memory leak prevented, will not make allocation"; break;
	case ErrorCode::DOUBLE_FREE:
		message = "system crash prevented, will skip this deallocation"; break;
	case ErrorCode::INDEX_OUT_OF_BOUND:
		message = "out of bound"; break;
	}

	std::cout << command << " - " << message << std::endl;
}