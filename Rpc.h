#ifndef RPC_H
#define RPC_H

#include <jsoncpp/json/json.h>
#include <jsonrpccpp/server/connectors/httpserver.h>
#include "RpcFace.h"

class Rpc : public RpcFace
{
public:
    Rpc(jsonrpc::HttpServer &server); // Add this constructor
    Json::Value getTestInfo(int p1, int p2, int p3) override;
};

#endif // RPC_H

