# MultiNodeLighter

![Architecture](./assets/architecture.png)

## Technologies
- **C++17**
- **CMake**
- **gRPC**
- **Protobuf**
- **ZeroMQ**
- **Crow** - for Restful interaction

## Running
```bash
mkdir -p build
cd build

cmake .. # or PROJECT=<Project name> cmake .. if you want to build a specific project 
cmake --build . # replace . with path to build directory
```

