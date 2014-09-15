#pragma once
#include "mvconverter.h"
#include <windows.h>
class __declspec( dllexport ) MVDirectory
{
public:
	MVDirectory(void);
	~MVDirectory(void);
	void ListFile(std::string directory);
};
