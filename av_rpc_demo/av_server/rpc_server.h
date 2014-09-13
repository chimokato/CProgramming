#pragma once
#include<string>
using namespace std;
#pragma comment(lib,"rpcrt4.lib")
#include "../av_interface/rpc_interface.h"
#include "../av_interface/rpc_interface_s.c"


class RPCServer
{
public:
	RPCServer(void);
	~RPCServer(void);
	static RPC_STATUS CALLBACK SecurityCallback(RPC_IF_HANDLE /*hInterface*/, void* /*pBindingHandle*/);
	static void* __RPC_USER midl_user_allocate(size_t size);
	static void __RPC_USER midl_user_free(void* p);
	static void bind(int port);
	static void listen();
};
