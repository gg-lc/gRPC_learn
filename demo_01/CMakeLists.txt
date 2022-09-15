cmake_minimum_required(VERSION 3.19)
project(gRPC_learn)

set(CMAKE_CXX_STANDARD 14)

set(Protobuf_INCLUDE_DIR /root/gglc/install/grpc/include)
set(Protobuf_LIBRARIES /root/gglc/install/grpc/lib)

# gRPC
include_directories(${Protobuf_INCLUDE_DIR})
link_directories(${Protobuf_INCLUDE_DIR})

include_directories(/root/gglc/install/grpc/include)
link_directories(/root/gglc/install/grpc/lib)

#find_package(protobuf REQUIRED)
#include_directories(${Protobuf_INCLUDE_DIR})
#include_directories(${Protobuf_LIBRARIES})

# try to add custom command
# add_custom_command()
# protobuf_generate_cpp()

add_executable(server server.cpp)
add_executable(client client.cpp)