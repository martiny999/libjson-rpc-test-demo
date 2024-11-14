#ifndef RPCFACE_H
#define RPCFACE_H

#include <jsoncpp/json/json.h>
#include <jsonrpccpp/server.h>

class RpcFace : public jsonrpc::AbstractServer<RpcFace>
{
public:
    RpcFace(jsonrpc::AbstractServerConnector &connector) :
        jsonrpc::AbstractServer<RpcFace>(connector)
    {
        this->bindAndAddMethod(jsonrpc::Procedure("getTestInfo", jsonrpc::PARAMS_BY_POSITION, jsonrpc::JSON_OBJECT,
                                                  "param1", jsonrpc::JSON_INTEGER,
                                                  "param2", jsonrpc::JSON_INTEGER,
                                                  "param3", jsonrpc::JSON_INTEGER, NULL),
                               &RpcFace::getTestInfoI);
    }

    virtual void getTestInfoI(const Json::Value &request, Json::Value &response)
    {
        response = this->getTestInfo(request[0u].asInt(), request[1u].asInt(), request[2u].asInt());
    }

    virtual Json::Value getTestInfo(int param1, int param2, int param3) = 0;
};

#endif // RPCFACE_H

