cmake_minimum_required(VERSION 3.19)
project(gRPC_learn)

set(CMAKE_CXX_STANDARD 14)

# gRPC
include_directories(/root/gglc/install/grpc/include)
link_directories(/root/gglc/install/grpc/lib)

# try to add custom command
# add_custom_command()
# protobuf_generate_cpp()

add_executable(gRPC_learn main.cpp)

add_executable(demo_01_server demo_01/server.cpp)
add_executable(demo_01_client demo_01/client.cpp)