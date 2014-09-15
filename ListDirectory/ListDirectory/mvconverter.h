#pragma once
#include <iostream>
#include <string>


class __declspec( dllexport ) MVConverter
{
public:
	MVConverter(void);
	~MVConverter(void);
	char * String2Char(std::string input);
	const char * String2ConstChar(std::string input);
};
