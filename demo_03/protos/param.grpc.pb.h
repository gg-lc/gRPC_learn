// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: param.proto
// Original file comments:
// protoc --cpp_out=./ param.proto
// protoc --cpp_out=./ param.proto --grpc_out=./ --plugin=protoc-gen-grpc=/root/gglc/install/grpc/bin/grpc_cpp_plugin param.proto
//
#ifndef GRPC_param_2eproto__INCLUDED
#define GRPC_param_2eproto__INCLUDED

#include "param.pb.h"

#include <functional>
#include <grpcpp/impl/codegen/async_generic_service.h>
#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/client_callback.h>
#include <grpcpp/impl/codegen/client_context.h>
#include <grpcpp/impl/codegen/completion_queue.h>
#include <grpcpp/impl/codegen/message_allocator.h>
#include <grpcpp/impl/codegen/method_handler.h>
#include <grpcpp/impl/codegen/proto_utils.h>
#include <grpcpp/impl/codegen/rpc_method.h>
#include <grpcpp/impl/codegen/server_callback.h>
#include <grpcpp/impl/codegen/server_callback_handlers.h>
#include <grpcpp/impl/codegen/server_context.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/status.h>
#include <grpcpp/impl/codegen/stub_options.h>
#include <grpcpp/impl/codegen/sync_stream.h>

class SearchService final {
 public:
  static constexpr char const* service_full_name() {
    return "SearchService";
  }
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    virtual ::grpc::Status Search(::grpc::ClientContext* context, const ::SearchRequest& request, ::SearchResponse* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::SearchResponse>> AsyncSearch(::grpc::ClientContext* context, const ::SearchRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::SearchResponse>>(AsyncSearchRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::SearchResponse>> PrepareAsyncSearch(::grpc::ClientContext* context, const ::SearchRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::SearchResponse>>(PrepareAsyncSearchRaw(context, request, cq));
    }
    class async_interface {
     public:
      virtual ~async_interface() {}
      virtual void Search(::grpc::ClientContext* context, const ::SearchRequest* request, ::SearchResponse* response, std::function<void(::grpc::Status)>) = 0;
      virtual void Search(::grpc::ClientContext* context, const ::SearchRequest* request, ::SearchResponse* response, ::grpc::ClientUnaryReactor* reactor) = 0;
    };
    typedef class async_interface experimental_async_interface;
    virtual class async_interface* async() { return nullptr; }
    class async_interface* experimental_async() { return async(); }
   private:
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::SearchResponse>* AsyncSearchRaw(::grpc::ClientContext* context, const ::SearchRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::SearchResponse>* PrepareAsyncSearchRaw(::grpc::ClientContext* context, const ::SearchRequest& request, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());
    ::grpc::Status Search(::grpc::ClientContext* context, const ::SearchRequest& request, ::SearchResponse* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::SearchResponse>> AsyncSearch(::grpc::ClientContext* context, const ::SearchRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::SearchResponse>>(AsyncSearchRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::SearchResponse>> PrepareAsyncSearch(::grpc::ClientContext* context, const ::SearchRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::SearchResponse>>(PrepareAsyncSearchRaw(context, request, cq));
    }
    class async final :
      public StubInterface::async_interface {
     public:
      void Search(::grpc::ClientContext* context, const ::SearchRequest* request, ::SearchResponse* response, std::function<void(::grpc::Status)>) override;
      void Search(::grpc::ClientContext* context, const ::SearchRequest* request, ::SearchResponse* response, ::grpc::ClientUnaryReactor* reactor) override;
     private:
      friend class Stub;
      explicit async(Stub* stub): stub_(stub) { }
      Stub* stub() { return stub_; }
      Stub* stub_;
    };
    class async* async() override { return &async_stub_; }

   private:
    std::shared_ptr< ::grpc::ChannelInterface> channel_;
    class async async_stub_{this};
    ::grpc::ClientAsyncResponseReader< ::SearchResponse>* AsyncSearchRaw(::grpc::ClientContext* context, const ::SearchRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::SearchResponse>* PrepareAsyncSearchRaw(::grpc::ClientContext* context, const ::SearchRequest& request, ::grpc::CompletionQueue* cq) override;
    const ::grpc::internal::RpcMethod rpcmethod_Search_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    virtual ::grpc::Status Search(::grpc::ServerContext* context, const ::SearchRequest* request, ::SearchResponse* response);
  };
  template <class BaseClass>
  class WithAsyncMethod_Search : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithAsyncMethod_Search() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_Search() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Search(::grpc::ServerContext* /*context*/, const ::SearchRequest* /*request*/, ::SearchResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestSearch(::grpc::ServerContext* context, ::SearchRequest* request, ::grpc::ServerAsyncResponseWriter< ::SearchResponse>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_Search<Service > AsyncService;
  template <class BaseClass>
  class WithCallbackMethod_Search : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithCallbackMethod_Search() {
      ::grpc::Service::MarkMethodCallback(0,
          new ::grpc::internal::CallbackUnaryHandler< ::SearchRequest, ::SearchResponse>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::SearchRequest* request, ::SearchResponse* response) { return this->Search(context, request, response); }));}
    void SetMessageAllocatorFor_Search(
        ::grpc::MessageAllocator< ::SearchRequest, ::SearchResponse>* allocator) {
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::GetHandler(0);
      static_cast<::grpc::internal::CallbackUnaryHandler< ::SearchRequest, ::SearchResponse>*>(handler)
              ->SetMessageAllocator(allocator);
    }
    ~WithCallbackMethod_Search() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Search(::grpc::ServerContext* /*context*/, const ::SearchRequest* /*request*/, ::SearchResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* Search(
      ::grpc::CallbackServerContext* /*context*/, const ::SearchRequest* /*request*/, ::SearchResponse* /*response*/)  { return nullptr; }
  };
  typedef WithCallbackMethod_Search<Service > CallbackService;
  typedef CallbackService ExperimentalCallbackService;
  template <class BaseClass>
  class WithGenericMethod_Search : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithGenericMethod_Search() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_Search() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Search(::grpc::ServerContext* /*context*/, const ::SearchRequest* /*request*/, ::SearchResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithRawMethod_Search : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawMethod_Search() {
      ::grpc::Service::MarkMethodRaw(0);
    }
    ~WithRawMethod_Search() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Search(::grpc::ServerContext* /*context*/, const ::SearchRequest* /*request*/, ::SearchResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestSearch(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithRawCallbackMethod_Search : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawCallbackMethod_Search() {
      ::grpc::Service::MarkMethodRawCallback(0,
          new ::grpc::internal::CallbackUnaryHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response) { return this->Search(context, request, response); }));
    }
    ~WithRawCallbackMethod_Search() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Search(::grpc::ServerContext* /*context*/, const ::SearchRequest* /*request*/, ::SearchResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* Search(
      ::grpc::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)  { return nullptr; }
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_Search : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithStreamedUnaryMethod_Search() {
      ::grpc::Service::MarkMethodStreamed(0,
        new ::grpc::internal::StreamedUnaryHandler<
          ::SearchRequest, ::SearchResponse>(
            [this](::grpc::ServerContext* context,
                   ::grpc::ServerUnaryStreamer<
                     ::SearchRequest, ::SearchResponse>* streamer) {
                       return this->StreamedSearch(context,
                         streamer);
                  }));
    }
    ~WithStreamedUnaryMethod_Search() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status Search(::grpc::ServerContext* /*context*/, const ::SearchRequest* /*request*/, ::SearchResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedSearch(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::SearchRequest,::SearchResponse>* server_unary_streamer) = 0;
  };
  typedef WithStreamedUnaryMethod_Search<Service > StreamedUnaryService;
  typedef Service SplitStreamedService;
  typedef WithStreamedUnaryMethod_Search<Service > StreamedService;
};


#endif  // GRPC_param_2eproto__INCLUDED
