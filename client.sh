curl -X POST http://localhost:8545 -H "Content-Type: application/json" -d '{
  "jsonrpc": "2.0",
  "method": "getTestInfo",
  "params": [1, 2, 3],
  "id": 1
}'

