#pragma once
#include "mvconverter.h"

class __declspec( dllexport ) MVFile
{
public:
	MVFile(void);
	~MVFile(void);
	long long get_file_size(std::string filename);
	bool check_extension(std::string filename, std::string extension);
};
