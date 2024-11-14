#include <iostream>
#include "Rpc.h"
#include <jsonrpccpp/server/connectors/httpserver.h>

using namespace jsonrpc;

int main() {
    HttpServer httpServer(8545);
    Rpc rpc(httpServer);

    if (rpc.StartListening()) {
        std::cout << "Server started successfully" << std::endl;
    } else {
        std::cerr << "Error starting server" << std::endl;
        return 1;
    }

    // 阻塞主线程，防止程序退出
    std::cout << "Press Enter to stop the server..." << std::endl;
    std::cin.get();

    rpc.StopListening();
    return 0;
}

