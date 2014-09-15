#include "mvfile.h"

MVFile::MVFile(void)
{
}

MVFile::~MVFile(void)
{
}

long long MVFile::get_file_size( std::string filename )
{
	FILE * fp;
	MVConverter mvConverter;
	fopen_s (&fp, mvConverter.String2Char(filename), "r");
	int size;
	fseek(fp, 0L, SEEK_END);
	size = ftell(fp);
	return size;
}

bool MVFile::check_extension( std::string filename, std::string extension )
{
	MVConverter mvConverter;
	char *input = mvConverter.String2Char(filename);
	char *e = strrchr (input, '.');
	if (e == NULL)
		e = "";
	if (e == extension)
		return true;
	else
		return false;
}
