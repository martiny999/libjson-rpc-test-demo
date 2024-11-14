#include "Rpc.h"

Rpc::Rpc(jsonrpc::HttpServer &server) :
    RpcFace(server) // Initialize the base class with the server
{
    // Register your methods here if needed
}

Json::Value Rpc::getTestInfo(int p1, int p2, int p3)
{
    Json::Value result;
    result["p1"] = p1;
    result["p2"] = p2;
    result["p3"] = p3;
    return result;
}

