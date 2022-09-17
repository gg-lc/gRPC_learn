cmake_minimum_required(VERSION 3.10)
project(gRPC_learn)

macro(print_all_variables)
    message(STATUS "print_all_variables------------------------------------------{")
    get_cmake_property(_variableNames VARIABLES)
    foreach (_variableName ${_variableNames})
        message(STATUS "${_variableName}=${${_variableName}}")
    endforeach()
    message(STATUS "print_all_variables------------------------------------------}")
endmacro()

set(CMAKE_CXX_STANDARD 14)

# set(Protobuf_INCLUDE_DIR /usr/include)
#set(Protobuf_LIBRARIES /root/gglc/install/grpc/lib)

# gRPC
#include_directories(${Protobuf_INCLUDE_DIR})
#link_directories(${Protobuf_INCLUDE_DIR})

include_directories(/root/gglc/install/grpc/include)
link_directories(/root/gglc/install/grpc/lib)

print_all_variables()

find_package(Protobuf REQUIRED)
include_directories(${Protobuf_INCLUDE_DIR})
include_directories(${Protobuf_LIBRARIES})

# try to add custom command
# add_custom_command()
# protobuf_generate_cpp()

aux_source_directory(proto, PROTO)
add_executable(server server.cpp ${PROTO})
add_executable(client client.cpp ${PROTO})