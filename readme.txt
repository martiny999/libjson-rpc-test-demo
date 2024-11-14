测试服务器：
你可以使用 curl 或者编写一个简单的客户端来测试你的 JSON-RPC 服务器。假设你的服务器在端口 8545 上运行，并且你有一个名为 getTestInfo 的方法，你可以使用以下 curl 命令来测试：

sh
curl -X POST http://localhost:8545 -H "Content-Type: application/json" -d '{
  "jsonrpc": "2.0",
  "method": "getTestInfo",
  "params": [1, 2, 3],
  "id": 1
}'
这将向你的服务器发送一个 JSON-RPC 请求，调用 getTestInfo 方法并传递参数 1, 2, 3。

检查响应：
如果一切正常，你应该会收到类似如下的响应：

json
{
  "jsonrpc": "2.0",
  "result": {
    "p1": 1,
    "p2": 2,
    "p3": 3
  },
  "id": 1
}
