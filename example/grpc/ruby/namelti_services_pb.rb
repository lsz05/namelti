# Generated by the protocol buffer compiler.  DO NOT EDIT!
# Source: namelti.proto for package 'namelti.server'

require 'grpc'
require 'namelti_pb'

module Namelti
  module Server
    module NameltiService
      class Service

        include GRPC::GenericService

        self.marshal_class_method = :encode
        self.unmarshal_class_method = :decode
        self.service_name = 'namelti.server.NameltiService'

        rpc :ConvertName, NameltiTranscriptRequest, NameltiTranscriptResponse
        rpc :ConvertNameList, NameltiTranscriptRequests, NameltiTranscriptResponses
      end

      Stub = Service.rpc_stub_class
    end
  end
end
