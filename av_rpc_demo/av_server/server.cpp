#pragma once
#include "rpc_server.h"
#include <iostream>
#include <windows.h>
using namespace std;


// Server function.
void Output(handle_t hBinding,const char* szOutput)
{
	std::cout << szOutput << std::endl;
}

void Count(handle_t hBinding,int iStart, int iStop)
{
	for(int i = iStart; i<= iStop; i++)
	{
		printf("%d\t", i);
		if (i%5 == 0)
		{
			printf("\n");
		}
		Sleep(1000); 

	}
}
int main()
{
	RPCServer rpc_server;
	rpc_server.bind();
	rpc_server.listen();

}