// Generated by the gRPC protobuf plugin.
// If you make any local change, they will be lost.
// source: connection.proto
#ifndef GRPC_connection_2eproto__INCLUDED
#define GRPC_connection_2eproto__INCLUDED

#include "connection.pb.h"

#include <grpc++/impl/codegen/async_stream.h>
#include <grpc++/impl/codegen/async_unary_call.h>
#include <grpc++/impl/codegen/proto_utils.h>
#include <grpc++/impl/codegen/rpc_method.h>
#include <grpc++/impl/codegen/service_type.h>
#include <grpc++/impl/codegen/status.h>
#include <grpc++/impl/codegen/stub_options.h>
#include <grpc++/impl/codegen/sync_stream.h>

namespace grpc {
class CompletionQueue;
class Channel;
class RpcService;
class ServerCompletionQueue;
class ServerContext;
}  // namespace grpc

namespace connection_object {

class IrohaConnection GRPC_FINAL {
 public:
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    virtual ::grpc::Status Operation(::grpc::ClientContext* context, const ::connection_object::ConsensusEvent& request, ::connection_object::StatusResponse* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::connection_object::StatusResponse>> AsyncOperation(::grpc::ClientContext* context, const ::connection_object::ConsensusEvent& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::connection_object::StatusResponse>>(AsyncOperationRaw(context, request, cq));
    }
  private:
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::connection_object::StatusResponse>* AsyncOperationRaw(::grpc::ClientContext* context, const ::connection_object::ConsensusEvent& request, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub GRPC_FINAL : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel);
    ::grpc::Status Operation(::grpc::ClientContext* context, const ::connection_object::ConsensusEvent& request, ::connection_object::StatusResponse* response) GRPC_OVERRIDE;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::connection_object::StatusResponse>> AsyncOperation(::grpc::ClientContext* context, const ::connection_object::ConsensusEvent& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::connection_object::StatusResponse>>(AsyncOperationRaw(context, request, cq));
    }

   private:
    std::shared_ptr< ::grpc::ChannelInterface> channel_;
    ::grpc::ClientAsyncResponseReader< ::connection_object::StatusResponse>* AsyncOperationRaw(::grpc::ClientContext* context, const ::connection_object::ConsensusEvent& request, ::grpc::CompletionQueue* cq) GRPC_OVERRIDE;
    const ::grpc::RpcMethod rpcmethod_Operation_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    virtual ::grpc::Status Operation(::grpc::ServerContext* context, const ::connection_object::ConsensusEvent* request, ::connection_object::StatusResponse* response);
  };
  template <class BaseClass>
  class WithAsyncMethod_Operation : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_Operation() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_Operation() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Operation(::grpc::ServerContext* context, const ::connection_object::ConsensusEvent* request, ::connection_object::StatusResponse* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestOperation(::grpc::ServerContext* context, ::connection_object::ConsensusEvent* request, ::grpc::ServerAsyncResponseWriter< ::connection_object::StatusResponse>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_Operation<Service > AsyncService;
  template <class BaseClass>
  class WithGenericMethod_Operation : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_Operation() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_Operation() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Operation(::grpc::ServerContext* context, const ::connection_object::ConsensusEvent* request, ::connection_object::StatusResponse* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
};

}  // namespace connection_object


#endif  // GRPC_connection_2eproto__INCLUDED