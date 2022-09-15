cmake_minimum_required(VERSION 3.13)
project(Service)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_FLAGS -std=c++11)
set(CMAKE_CXX_FLAGS "${CAMKE_CXX_FLAGS} -std=c++11 -pthread")
set(CMAKE_CXX_FLAGS_DEBUG "-g -Wall ${CMAKE_CXX_FLAGS}")
set(CMAKE_EXE_LINKER_FLAGS "-static-libgcc -static-libstdc++ -Wl,-allow-multiple-definition -Wl,--eh-frame-hdr")
set(CMAKE_MODULE_PATH /home/CLionProjects/Service/cmake)   #这里是指明查找grpc库的位置，会自动去这个目录下找Find_grpc.cmake文件

aux_source_directory(src/ LIST_SRC)
aux_source_directory(src/protos LIST_SRC)

add_executable(Service ${LIST_SRC})

include_directories(Service src/protos)

find_package(grpc REQUIRED)
include_directories(Service ${grpc_INCLUDE_DIRS})
target_link_libraries(Service ${grpc_LIBRARIES})


find_package(ZLIB)
include_directories(Service ${ZLIB_INCLUDE_DIRS})
target_link_libraries(Service ${ZLIB_LIBRARIES})
target_link_libraries(Service pthread)


set(SHEEP_PROJECT_SOURCE_DIR /root)
set(PACKAGE_PATH ${SHEEP_PROJECT_SOURCE_DIR}/grpc)
set(grpc_INCLUDE_DIRS ${SHEEP_PROJECT_SOURCE_DIR}/grpc/include)
set(grpc_INCLUDE_DIRS ${grpc_INCLUDE_DIRS} ${SHEEP_PROJECT_SOURCE_DIR}/grpc/third_party/protobuf/src)
SET(GRPCC++_LIBRARIES ${PACKAGE_PATH}/build/libgrpc++.a)
SET(GRPC_LIBRARIES ${PACKAGE_PATH}/build/libgrpc.a)
SET(PROTOBUF_LIBRARIES ${PACKAGE_PATH}/build/libprotobuf.a)
FIND_LIBRARY(RT_LIBRARIES librt.a PATH ${PACKAGE_PATH}/build)
SET(grpc_LIBRARIES ${GRPCC++_LIBRARIES}
        ${GRPC_LIBRARIES} ${PROTOBUF_LIBRARIES} ${RT_LIBRARIES})