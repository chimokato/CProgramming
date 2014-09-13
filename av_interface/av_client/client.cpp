#pragma once
#include "rpc_client.h"

int main()
{
	RPCClient rpc_client;
	rpc_client.connect();
	rpc_client.run();
	rpc_client.close();
}

