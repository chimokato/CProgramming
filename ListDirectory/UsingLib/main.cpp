#include <stdio.h>
#include "mvconverter.h"
#include "mvdirectory.h"
#include "mvfile.h"
int main (int argc, char *argv[])
{
	printf("Hello");
	MVDirectory mvDirectory;
	mvDirectory.ListFile("D:\\MVCorp\\*.*");
	return 1;
}