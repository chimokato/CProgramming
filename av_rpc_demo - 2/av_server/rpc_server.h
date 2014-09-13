#pragma once
#include<string>
using namespace std;
#pragma comment(lib,"rpcrt4.lib")
#include "../av_interface/rpc_interface.h"
#include "../av_interface/rpc_interface_s.c"


class RPCServer
{
private:
	RPC_STATUS status;
public:
	RPCServer(void);
	~RPCServer(void);
	//RPC_STATUS CALLBACK SecurityCallback(RPC_IF_HANDLE /*hInterface*/, void* /*pBindingHandle*/);
	//void* __RPC_USER midl_user_allocate(size_t size);
	//void __RPC_USER midl_user_free(void* p);
	void bind(int port);
	void listen();
};
