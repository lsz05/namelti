// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: namelti.proto
#ifndef GRPC_namelti_2eproto__INCLUDED
#define GRPC_namelti_2eproto__INCLUDED

#include "namelti.pb.h"

#include <functional>
#include <grpcpp/impl/codegen/async_generic_service.h>
#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/method_handler_impl.h>
#include <grpcpp/impl/codegen/proto_utils.h>
#include <grpcpp/impl/codegen/rpc_method.h>
#include <grpcpp/impl/codegen/server_callback.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/status.h>
#include <grpcpp/impl/codegen/stub_options.h>
#include <grpcpp/impl/codegen/sync_stream.h>

namespace grpc {
class CompletionQueue;
class Channel;
class ServerCompletionQueue;
class ServerContext;
}  // namespace grpc

namespace namelti {
namespace server {

class NameltiService final {
 public:
  static constexpr char const* service_full_name() {
    return "namelti.server.NameltiService";
  }
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    virtual ::grpc::Status ConvertName(::grpc::ClientContext* context, const ::namelti::server::NameltiTranscriptRequest& request, ::namelti::server::NameltiTranscriptResponse* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::namelti::server::NameltiTranscriptResponse>> AsyncConvertName(::grpc::ClientContext* context, const ::namelti::server::NameltiTranscriptRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::namelti::server::NameltiTranscriptResponse>>(AsyncConvertNameRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::namelti::server::NameltiTranscriptResponse>> PrepareAsyncConvertName(::grpc::ClientContext* context, const ::namelti::server::NameltiTranscriptRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::namelti::server::NameltiTranscriptResponse>>(PrepareAsyncConvertNameRaw(context, request, cq));
    }
    virtual ::grpc::Status ConvertNameList(::grpc::ClientContext* context, const ::namelti::server::NameltiTranscriptRequests& request, ::namelti::server::NameltiTranscriptResponses* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::namelti::server::NameltiTranscriptResponses>> AsyncConvertNameList(::grpc::ClientContext* context, const ::namelti::server::NameltiTranscriptRequests& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::namelti::server::NameltiTranscriptResponses>>(AsyncConvertNameListRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::namelti::server::NameltiTranscriptResponses>> PrepareAsyncConvertNameList(::grpc::ClientContext* context, const ::namelti::server::NameltiTranscriptRequests& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::namelti::server::NameltiTranscriptResponses>>(PrepareAsyncConvertNameListRaw(context, request, cq));
    }
    class experimental_async_interface {
     public:
      virtual ~experimental_async_interface() {}
      virtual void ConvertName(::grpc::ClientContext* context, const ::namelti::server::NameltiTranscriptRequest* request, ::namelti::server::NameltiTranscriptResponse* response, std::function<void(::grpc::Status)>) = 0;
      virtual void ConvertNameList(::grpc::ClientContext* context, const ::namelti::server::NameltiTranscriptRequests* request, ::namelti::server::NameltiTranscriptResponses* response, std::function<void(::grpc::Status)>) = 0;
    };
    virtual class experimental_async_interface* experimental_async() { return nullptr; }
  private:
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::namelti::server::NameltiTranscriptResponse>* AsyncConvertNameRaw(::grpc::ClientContext* context, const ::namelti::server::NameltiTranscriptRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::namelti::server::NameltiTranscriptResponse>* PrepareAsyncConvertNameRaw(::grpc::ClientContext* context, const ::namelti::server::NameltiTranscriptRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::namelti::server::NameltiTranscriptResponses>* AsyncConvertNameListRaw(::grpc::ClientContext* context, const ::namelti::server::NameltiTranscriptRequests& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::namelti::server::NameltiTranscriptResponses>* PrepareAsyncConvertNameListRaw(::grpc::ClientContext* context, const ::namelti::server::NameltiTranscriptRequests& request, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel);
    ::grpc::Status ConvertName(::grpc::ClientContext* context, const ::namelti::server::NameltiTranscriptRequest& request, ::namelti::server::NameltiTranscriptResponse* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::namelti::server::NameltiTranscriptResponse>> AsyncConvertName(::grpc::ClientContext* context, const ::namelti::server::NameltiTranscriptRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::namelti::server::NameltiTranscriptResponse>>(AsyncConvertNameRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::namelti::server::NameltiTranscriptResponse>> PrepareAsyncConvertName(::grpc::ClientContext* context, const ::namelti::server::NameltiTranscriptRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::namelti::server::NameltiTranscriptResponse>>(PrepareAsyncConvertNameRaw(context, request, cq));
    }
    ::grpc::Status ConvertNameList(::grpc::ClientContext* context, const ::namelti::server::NameltiTranscriptRequests& request, ::namelti::server::NameltiTranscriptResponses* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::namelti::server::NameltiTranscriptResponses>> AsyncConvertNameList(::grpc::ClientContext* context, const ::namelti::server::NameltiTranscriptRequests& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::namelti::server::NameltiTranscriptResponses>>(AsyncConvertNameListRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::namelti::server::NameltiTranscriptResponses>> PrepareAsyncConvertNameList(::grpc::ClientContext* context, const ::namelti::server::NameltiTranscriptRequests& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::namelti::server::NameltiTranscriptResponses>>(PrepareAsyncConvertNameListRaw(context, request, cq));
    }
    class experimental_async final :
      public StubInterface::experimental_async_interface {
     public:
      void ConvertName(::grpc::ClientContext* context, const ::namelti::server::NameltiTranscriptRequest* request, ::namelti::server::NameltiTranscriptResponse* response, std::function<void(::grpc::Status)>) override;
      void ConvertNameList(::grpc::ClientContext* context, const ::namelti::server::NameltiTranscriptRequests* request, ::namelti::server::NameltiTranscriptResponses* response, std::function<void(::grpc::Status)>) override;
     private:
      friend class Stub;
      explicit experimental_async(Stub* stub): stub_(stub) { }
      Stub* stub() { return stub_; }
      Stub* stub_;
    };
    class experimental_async_interface* experimental_async() override { return &async_stub_; }

   private:
    std::shared_ptr< ::grpc::ChannelInterface> channel_;
    class experimental_async async_stub_{this};
    ::grpc::ClientAsyncResponseReader< ::namelti::server::NameltiTranscriptResponse>* AsyncConvertNameRaw(::grpc::ClientContext* context, const ::namelti::server::NameltiTranscriptRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::namelti::server::NameltiTranscriptResponse>* PrepareAsyncConvertNameRaw(::grpc::ClientContext* context, const ::namelti::server::NameltiTranscriptRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::namelti::server::NameltiTranscriptResponses>* AsyncConvertNameListRaw(::grpc::ClientContext* context, const ::namelti::server::NameltiTranscriptRequests& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::namelti::server::NameltiTranscriptResponses>* PrepareAsyncConvertNameListRaw(::grpc::ClientContext* context, const ::namelti::server::NameltiTranscriptRequests& request, ::grpc::CompletionQueue* cq) override;
    const ::grpc::internal::RpcMethod rpcmethod_ConvertName_;
    const ::grpc::internal::RpcMethod rpcmethod_ConvertNameList_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    virtual ::grpc::Status ConvertName(::grpc::ServerContext* context, const ::namelti::server::NameltiTranscriptRequest* request, ::namelti::server::NameltiTranscriptResponse* response);
    virtual ::grpc::Status ConvertNameList(::grpc::ServerContext* context, const ::namelti::server::NameltiTranscriptRequests* request, ::namelti::server::NameltiTranscriptResponses* response);
  };
  template <class BaseClass>
  class WithAsyncMethod_ConvertName : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_ConvertName() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_ConvertName() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status ConvertName(::grpc::ServerContext* context, const ::namelti::server::NameltiTranscriptRequest* request, ::namelti::server::NameltiTranscriptResponse* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestConvertName(::grpc::ServerContext* context, ::namelti::server::NameltiTranscriptRequest* request, ::grpc::ServerAsyncResponseWriter< ::namelti::server::NameltiTranscriptResponse>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_ConvertNameList : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_ConvertNameList() {
      ::grpc::Service::MarkMethodAsync(1);
    }
    ~WithAsyncMethod_ConvertNameList() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status ConvertNameList(::grpc::ServerContext* context, const ::namelti::server::NameltiTranscriptRequests* request, ::namelti::server::NameltiTranscriptResponses* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestConvertNameList(::grpc::ServerContext* context, ::namelti::server::NameltiTranscriptRequests* request, ::grpc::ServerAsyncResponseWriter< ::namelti::server::NameltiTranscriptResponses>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(1, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_ConvertName<WithAsyncMethod_ConvertNameList<Service > > AsyncService;
  template <class BaseClass>
  class ExperimentalWithCallbackMethod_ConvertName : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    ExperimentalWithCallbackMethod_ConvertName() {
      ::grpc::Service::experimental().MarkMethodCallback(0,
        new ::grpc::internal::CallbackUnaryHandler< ExperimentalWithCallbackMethod_ConvertName<BaseClass>, ::namelti::server::NameltiTranscriptRequest, ::namelti::server::NameltiTranscriptResponse>(
          [this](::grpc::ServerContext* context,
                 const ::namelti::server::NameltiTranscriptRequest* request,
                 ::namelti::server::NameltiTranscriptResponse* response,
                 ::grpc::experimental::ServerCallbackRpcController* controller) {
                   this->ConvertName(context, request, response, controller);
                 }, this));
    }
    ~ExperimentalWithCallbackMethod_ConvertName() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status ConvertName(::grpc::ServerContext* context, const ::namelti::server::NameltiTranscriptRequest* request, ::namelti::server::NameltiTranscriptResponse* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual void ConvertName(::grpc::ServerContext* context, const ::namelti::server::NameltiTranscriptRequest* request, ::namelti::server::NameltiTranscriptResponse* response, ::grpc::experimental::ServerCallbackRpcController* controller) { controller->Finish(::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "")); }
  };
  template <class BaseClass>
  class ExperimentalWithCallbackMethod_ConvertNameList : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    ExperimentalWithCallbackMethod_ConvertNameList() {
      ::grpc::Service::experimental().MarkMethodCallback(1,
        new ::grpc::internal::CallbackUnaryHandler< ExperimentalWithCallbackMethod_ConvertNameList<BaseClass>, ::namelti::server::NameltiTranscriptRequests, ::namelti::server::NameltiTranscriptResponses>(
          [this](::grpc::ServerContext* context,
                 const ::namelti::server::NameltiTranscriptRequests* request,
                 ::namelti::server::NameltiTranscriptResponses* response,
                 ::grpc::experimental::ServerCallbackRpcController* controller) {
                   this->ConvertNameList(context, request, response, controller);
                 }, this));
    }
    ~ExperimentalWithCallbackMethod_ConvertNameList() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status ConvertNameList(::grpc::ServerContext* context, const ::namelti::server::NameltiTranscriptRequests* request, ::namelti::server::NameltiTranscriptResponses* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual void ConvertNameList(::grpc::ServerContext* context, const ::namelti::server::NameltiTranscriptRequests* request, ::namelti::server::NameltiTranscriptResponses* response, ::grpc::experimental::ServerCallbackRpcController* controller) { controller->Finish(::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "")); }
  };
  typedef ExperimentalWithCallbackMethod_ConvertName<ExperimentalWithCallbackMethod_ConvertNameList<Service > > ExperimentalCallbackService;
  template <class BaseClass>
  class WithGenericMethod_ConvertName : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_ConvertName() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_ConvertName() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status ConvertName(::grpc::ServerContext* context, const ::namelti::server::NameltiTranscriptRequest* request, ::namelti::server::NameltiTranscriptResponse* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_ConvertNameList : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_ConvertNameList() {
      ::grpc::Service::MarkMethodGeneric(1);
    }
    ~WithGenericMethod_ConvertNameList() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status ConvertNameList(::grpc::ServerContext* context, const ::namelti::server::NameltiTranscriptRequests* request, ::namelti::server::NameltiTranscriptResponses* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithRawMethod_ConvertName : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithRawMethod_ConvertName() {
      ::grpc::Service::MarkMethodRaw(0);
    }
    ~WithRawMethod_ConvertName() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status ConvertName(::grpc::ServerContext* context, const ::namelti::server::NameltiTranscriptRequest* request, ::namelti::server::NameltiTranscriptResponse* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestConvertName(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithRawMethod_ConvertNameList : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithRawMethod_ConvertNameList() {
      ::grpc::Service::MarkMethodRaw(1);
    }
    ~WithRawMethod_ConvertNameList() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status ConvertNameList(::grpc::ServerContext* context, const ::namelti::server::NameltiTranscriptRequests* request, ::namelti::server::NameltiTranscriptResponses* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestConvertNameList(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(1, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class ExperimentalWithRawCallbackMethod_ConvertName : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    ExperimentalWithRawCallbackMethod_ConvertName() {
      ::grpc::Service::experimental().MarkMethodRawCallback(0,
        new ::grpc::internal::CallbackUnaryHandler< ExperimentalWithRawCallbackMethod_ConvertName<BaseClass>, ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
          [this](::grpc::ServerContext* context,
                 const ::grpc::ByteBuffer* request,
                 ::grpc::ByteBuffer* response,
                 ::grpc::experimental::ServerCallbackRpcController* controller) {
                   this->ConvertName(context, request, response, controller);
                 }, this));
    }
    ~ExperimentalWithRawCallbackMethod_ConvertName() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status ConvertName(::grpc::ServerContext* context, const ::namelti::server::NameltiTranscriptRequest* request, ::namelti::server::NameltiTranscriptResponse* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual void ConvertName(::grpc::ServerContext* context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response, ::grpc::experimental::ServerCallbackRpcController* controller) { controller->Finish(::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "")); }
  };
  template <class BaseClass>
  class ExperimentalWithRawCallbackMethod_ConvertNameList : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    ExperimentalWithRawCallbackMethod_ConvertNameList() {
      ::grpc::Service::experimental().MarkMethodRawCallback(1,
        new ::grpc::internal::CallbackUnaryHandler< ExperimentalWithRawCallbackMethod_ConvertNameList<BaseClass>, ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
          [this](::grpc::ServerContext* context,
                 const ::grpc::ByteBuffer* request,
                 ::grpc::ByteBuffer* response,
                 ::grpc::experimental::ServerCallbackRpcController* controller) {
                   this->ConvertNameList(context, request, response, controller);
                 }, this));
    }
    ~ExperimentalWithRawCallbackMethod_ConvertNameList() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status ConvertNameList(::grpc::ServerContext* context, const ::namelti::server::NameltiTranscriptRequests* request, ::namelti::server::NameltiTranscriptResponses* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual void ConvertNameList(::grpc::ServerContext* context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response, ::grpc::experimental::ServerCallbackRpcController* controller) { controller->Finish(::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "")); }
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_ConvertName : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithStreamedUnaryMethod_ConvertName() {
      ::grpc::Service::MarkMethodStreamed(0,
        new ::grpc::internal::StreamedUnaryHandler< ::namelti::server::NameltiTranscriptRequest, ::namelti::server::NameltiTranscriptResponse>(std::bind(&WithStreamedUnaryMethod_ConvertName<BaseClass>::StreamedConvertName, this, std::placeholders::_1, std::placeholders::_2)));
    }
    ~WithStreamedUnaryMethod_ConvertName() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status ConvertName(::grpc::ServerContext* context, const ::namelti::server::NameltiTranscriptRequest* request, ::namelti::server::NameltiTranscriptResponse* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedConvertName(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::namelti::server::NameltiTranscriptRequest,::namelti::server::NameltiTranscriptResponse>* server_unary_streamer) = 0;
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_ConvertNameList : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithStreamedUnaryMethod_ConvertNameList() {
      ::grpc::Service::MarkMethodStreamed(1,
        new ::grpc::internal::StreamedUnaryHandler< ::namelti::server::NameltiTranscriptRequests, ::namelti::server::NameltiTranscriptResponses>(std::bind(&WithStreamedUnaryMethod_ConvertNameList<BaseClass>::StreamedConvertNameList, this, std::placeholders::_1, std::placeholders::_2)));
    }
    ~WithStreamedUnaryMethod_ConvertNameList() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status ConvertNameList(::grpc::ServerContext* context, const ::namelti::server::NameltiTranscriptRequests* request, ::namelti::server::NameltiTranscriptResponses* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedConvertNameList(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::namelti::server::NameltiTranscriptRequests,::namelti::server::NameltiTranscriptResponses>* server_unary_streamer) = 0;
  };
  typedef WithStreamedUnaryMethod_ConvertName<WithStreamedUnaryMethod_ConvertNameList<Service > > StreamedUnaryService;
  typedef Service SplitStreamedService;
  typedef WithStreamedUnaryMethod_ConvertName<WithStreamedUnaryMethod_ConvertNameList<Service > > StreamedService;
};

}  // namespace server
}  // namespace namelti


#endif  // GRPC_namelti_2eproto__INCLUDED