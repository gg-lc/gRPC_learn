cmake_minimum_required(VERSION 3.13)
project(Service)

set(CMAKE_CXX_STANDARD 14)

aux_source_directory(./ LIST_SRC)
aux_source_directory(./protos LIST_SRC)

add_executable(Service ${LIST_SRC})

include_directories(Service ./protos)

# find_package(grpc REQUIRED)
include_directories(Service /root/gglc/install/grpc/include)
target_link_libraries(Service /root/gglc/install/grpc/lib)

include(FindProtobuf)
find_package(Protobuf REQUIRED)
include_directories(${PROTOBUF_INCLUDE_DIR})