#include "mvconverter.h"

MVConverter::MVConverter(void)
{
}

MVConverter::~MVConverter(void)
{
}

char * MVConverter::String2Char(string input)
{
	char *output = new char[input.length() + 1];
	strcpy(output, input.c_str());
	// do stuff
	//delete [] output;
	return output;
}

const char * MVConverter::String2ConstChar(string input)
{
	const char *output = input.c_str();
	return output;
}
