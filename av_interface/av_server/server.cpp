#include "rpc_server.h"
#include <iostream>
#include <windows.h>
using namespace std;


// Server function.
void Output(handle_t hBinding,const char* szOutput)
{
	std::cout << szOutput << std::endl;
}

void Count(int iStart, int iStop)
{
	for(int i = iStart; i<= iStop; i++)
	{
		std::cout << i << "\t";
		if (i%5 == 0)
		{
			std::cout << std::endl;
		}
		Sleep(1000); 

	}
}


int main()
{
	bind();
	listen();
}


