#pragma once
#import <string>
using namespace std;

class MVConverter
{
public:
	MVConverter(void);
	~MVConverter(void);
	char * String2Char(string input);
	const char * String2ConstChar(string input);
};
