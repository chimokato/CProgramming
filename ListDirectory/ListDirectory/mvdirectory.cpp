#include "mvdirectory.h"


MVDirectory::MVDirectory(void)
{
}

MVDirectory::~MVDirectory(void)
{
}

void MVDirectory::ListFile( std::string directory )
{
	WIN32_FIND_DATA FindFileData;
	HANDLE hFind;
	MVConverter mvConverter;
	hFind = FindFirstFile(mvConverter.String2Char(directory), &FindFileData);
	if (hFind == INVALID_HANDLE_VALUE) 
	{
		printf ("FindFirstFile failed (%d)\n", GetLastError());
		return;
	} 
	else 
	{
		do
		{
			printf ("The first file found is %s\n", FindFileData.cFileName);
		} while (FindNextFile(hFind, &FindFileData)!= 0);
		FindClose(hFind);
	}
}
