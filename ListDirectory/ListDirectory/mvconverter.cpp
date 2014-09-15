#include "mvconverter.h"

MVConverter::MVConverter(void)
{
}

MVConverter::~MVConverter(void)
{
}

char * MVConverter::String2Char( std::string input )
{
	char *output = new char[input.size() + 1];
	strcpy_s(output, input.length() + 1,input.c_str());
	// do stuff
	//delete [] output;
	return output;
}

const char * MVConverter::String2ConstChar( std::string input )
{
	const char *output = input.c_str();
	return output;
}
