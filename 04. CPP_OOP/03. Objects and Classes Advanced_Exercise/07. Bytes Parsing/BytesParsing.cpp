#include <iostream>
#include <string>
#include <vector>
#include "Defines.h"

ErrorCode parseShort(const char*& begin, const char* end, long long& res)
{
	if (end - begin < 2)
		return ErrorCode::PARSE_FAILURE;

	res = *(short*)begin;
	begin += 2;

	return ErrorCode::PARSE_SUCCESS;
}

ErrorCode parseInt(const char*& begin, const char* end, long long& res)
{
	if (end - begin < 4)
		return ErrorCode::PARSE_FAILURE;

	res = *(int*)begin;
	begin += 4;

	return ErrorCode::PARSE_SUCCESS;
}

ErrorCode parseLong(const char*& begin, const char* end, long long& res)
{
	if (end - begin < 8)
		return ErrorCode::PARSE_FAILURE;

	res = *(long long*)begin;
	begin += 8;

	return ErrorCode::PARSE_SUCCESS;
}

ErrorCode parseData(const std::string& commands, const char* rawDataBytes, const size_t	rawDataBytesCount, std::vector<long long>& outParsedNumbers)
{
	if (rawDataBytesCount == 0 || commands.size() == 0)
		return ErrorCode::PARSE_EMPTY;

	const char* begin = rawDataBytes;
	const char* end = rawDataBytes + rawDataBytesCount;

	for (char c : commands)
	{
		long long res;
		ErrorCode ec;

		switch (c)
		{
		case 's':
			ec = parseShort(begin, end, res);
			break;
		case 'i':
			ec = parseInt(begin, end, res);
			break;
		default: // l
			ec = parseLong(begin, end, res);
			break;
		}

		if (ec != ErrorCode::PARSE_SUCCESS)
			return ec;

		outParsedNumbers.push_back(res);
	}

	return ErrorCode::PARSE_SUCCESS;
}

void printResult(const ErrorCode errorCode, const std::vector<long long>& parsedNumbers)
{
	if (errorCode == ErrorCode::PARSE_EMPTY)
	{
		std::cout << "No input provided" << std::endl;
		return;
	}

	for (auto l : parsedNumbers)
	{
		std::cout << l << ' ';
	}

	if (errorCode == ErrorCode::PARSE_FAILURE)
	{
		std::cout << "Warning, buffer underflow detected" << std::endl;
	}

	std::cout << std::endl;
}