#pragma once
#include <iostream>
#pragma comment(lib,"rpcrt4.lib")
#include "../av_interface/rpc_interface.h"
#include "../av_interface/rpc_interface_c.c"

class RPCClient
{
private:
	RPC_STATUS status;
	unsigned char* szStringBinding;
	handle_t hAVInterfaceBinding;
public:
	RPCClient(void);
	~RPCClient(void);
	void connect();
	void run();
	void close();
};
