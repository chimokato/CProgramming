#pragma once
#include <stdio.h>
#include "mvconverter.h"
#include "mvdirectory.h"
#include "mvfile.h"

int main (int argc, char *argv[])
{
	MVConverter mvconvertor;
	mvconvertor.String2ConstChar("aa");
	MVFile mvfile;
	bool check = mvfile.check_extension("C:\\a.txt", ".txt");
	return 1;
}