#include <iostream>
#include <memory>
#include <string>

#include <grpcpp/ext/proto_server_reflection_plugin.h>
#include <grpcpp/grpcpp.h>
#include <grpcpp/health_check_service_interface.h>


using grpc::Server;
using grpc::ServerBuilder;
using grpc::ServerContext;
using grpc::Status;



void RunServer() {
    std::string server_address("0.0.0.0:50051");

}

int main(int argc, char** argv) {
    RunServer();

    return 0;
}
