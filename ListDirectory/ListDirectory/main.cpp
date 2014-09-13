#include <string>
#include <vector>
#include <stdio.h>
#include <windows.h>
#include <tchar.h>
using namespace std;

char * string2char(string input)
{
	char *output = new char[input.length() + 1];
	strcpy(output, input.c_str());
	// do stuff
	//delete [] output;
	return output;
}

void list_file(string directory)
{
	WIN32_FIND_DATA FindFileData;
	HANDLE hFind;
	hFind = FindFirstFile(string2char(directory), &FindFileData);
	if (hFind == INVALID_HANDLE_VALUE) 
	{
		printf ("FindFirstFile failed (%d)\n", GetLastError());
		return;
	} 
	else 
	{
		do
		{
			_tprintf (TEXT("The first file found is %s\n"), FindFileData.cFileName);
		} while (FindNextFile(hFind, &FindFileData)!= 0);
		FindClose(hFind);
	}
}


long long get_file_size(string filename)
{
	FILE * fp;
	fp = fopen (string2char(filename), "r");

	int size;
	fseek(fp, 0L, SEEK_END);
	size = ftell(fp);
	return size;
}

int check_extension(string filename, string extension)
{
	char *input = string2char(filename);
	char *e = strrchr (input, '.');
	if (e == NULL)
		e = "";
	if (e == extension)
		return 1;
	else
		return 0;
}

int main (int argc, char *argv[]) 
{
	check_extension("F:\\Share\\a.txt", ".c");
	long long result = get_file_size("F:\\Share\\Dev_65296.zip");
	list_file("F:\\Share\\*.*");
	return 0;
}