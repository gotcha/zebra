################################################################################
#  THIS FILE IS 100% GENERATED BY ZPROJECT; DO NOT EDIT EXCEPT EXPERIMENTALLY  #
#  Please refer to the README for information about making permanent changes.  #
################################################################################

module Zwebrap
  module FFI
    
    #     XRAP serialization over ZMTP                                        
    #                                                                         
    # /*  These are the xrap_msg messages:                                    
    #                                                                         
    #     POST - Create a new, dynamically named resource in some parent.     
    #         parent              string      Schema/type/name                
    #         content_type        string      Content type                    
    #         content_body        longstr     New resource specification      
    #                                                                         
    #     POST_OK - Success response for POST.                                
    #         status_code         number 2    Response status code 2xx        
    #         location            string      Schema/type/name                
    #         etag                string      Opaque hash tag                 
    #         date_modified       number 8    Date and time modified          
    #         content_type        string      Content type                    
    #         content_body        longstr     Resource contents               
    #                                                                         
    #     GET - Retrieve a known resource.                                    
    #         resource            string      Schema/type/name                
    #         if_modified_since   number 8    GET if more recent              
    #         if_none_match       string      GET if changed                  
    #         content_type        string      Desired content type            
    #                                                                         
    #     GET_OK - Success response for GET.                                  
    #         status_code         number 2    Response status code 2xx        
    #         content_type        string      Actual content type             
    #         content_body        longstr     Resource specification          
    #                                                                         
    #     GET_EMPTY - Conditional GET returned 304 Not Modified.              
    #         status_code         number 2    Response status code 3xx        
    #                                                                         
    #     PUT - Update a known resource.                                      
    #         resource            string      Schema/type/name                
    #         if_unmodified_since  number 8   Update if same date             
    #         if_match            string      Update if same ETag             
    #         content_type        string      Content type                    
    #         content_body        longstr     New resource specification      
    #                                                                         
    #     PUT_OK - Success response for PUT.                                  
    #         status_code         number 2    Response status code 2xx        
    #         location            string      Schema/type/name                
    #         etag                string      Opaque hash tag                 
    #         date_modified       number 8    Date and time modified          
    #                                                                         
    #     DELETE - Remove a known resource.                                   
    #         resource            string      schema/type/name                
    #         if_unmodified_since  number 8   DELETE if same date             
    #         if_match            string      DELETE if same ETag             
    #                                                                         
    #     DELETE_OK - Success response for DELETE.                            
    #         status_code         number 2    Response status code 2xx        
    #                                                                         
    #     ERROR - Error response for any request.                             
    #         status_code         number 2    Response status code, 4xx or 5xx
    #         status_text         string      Response status text            
    # */                                                                      
    class XrapMsg
      class DestroyedError < RuntimeError; end
      
      # Boilerplate for self pointer, initializer, and finalizer
      class << self
        alias :__new :new
      end
      def initialize ptr, finalize=true
        @ptr = ptr
        if @ptr.null?
          @ptr = nil # Remove null pointers so we don't have to test for them.
        elsif finalize
          @finalizer = self.class.send :create_finalizer_for, @ptr
          ObjectSpace.define_finalizer self, @finalizer
        end
      end
      def self.create_finalizer_for ptr
        Proc.new do
          ptr_ptr = ::FFI::MemoryPointer.new :pointer
          ptr_ptr.write_pointer ptr
          ::Zwebrap::FFI.xrap_msg_destroy ptr_ptr
        end
      end
      def null?
        !@ptr or ptr.null?
      end
      # Return internal pointer
      def __ptr
        raise DestroyedError unless @ptr
        @ptr
      end
      # So external Libraries can just pass the Object to a FFI function which expects a :pointer
      alias_method :to_ptr, :__ptr
      # Nullify internal pointer and return pointer pointer
      def __ptr_give_ref
        raise DestroyedError unless @ptr
        ptr_ptr = ::FFI::MemoryPointer.new :pointer
        ptr_ptr.write_pointer @ptr
        ObjectSpace.undefine_finalizer self if @finalizer
        @finalizer = nil
        @ptr = nil
        ptr_ptr
      end
      
      # Create a new xrap_msg
      def self.new id
        id = Integer(id)
        ptr = ::Zwebrap::FFI.xrap_msg_new id
        
        __new ptr
      end
      
      # Destroy the xrap_msg
      def destroy
        return unless @ptr
        self_p = __ptr_give_ref
        result = ::Zwebrap::FFI.xrap_msg_destroy self_p
        result
      end
      
      # Print properties of the xrap msg object.
      def print
        raise DestroyedError unless @ptr
        result = ::Zwebrap::FFI.xrap_msg_print @ptr
        result
      end
      
      # Parse a zmsg_t and decides whether it is xrap_msg. Returns   
      # true if it is, false otherwise. Doesn't destroy or modify the
      # original message.                                            
      def is_xrap_msg msg
        raise DestroyedError unless @ptr
        result = ::Zwebrap::FFI.xrap_msg_is_xrap_msg @ptr, msg
        result
      end
      
      # Parse a xrap_msg from zmsg_t. Returns a new object, or NULL if
      # the message could not be parsed, or was NULL. Destroys msg and
      # nullifies the msg reference.                                  
      def self.decode msg_p
        result = ::Zwebrap::FFI.xrap_msg_decode msg_p
        result = XrapMsg.__new result, false
        result
      end
      
      # Encode xrap_msg into zmsg and destroy it. Returns a newly created       
      # object or NULL if error. Use when not in control of sending the message.
      def self.encode self_p
        self_p = self_p.__ptr_give_ref
        result = ::Zwebrap::FFI.xrap_msg_encode self_p
        result
      end
      
      # Receive and parse a xrap_msg from the socket. Returns new object, 
      # or NULL if error. Will block if there's no message waiting.       
      def self.recv input
        result = ::Zwebrap::FFI.xrap_msg_recv input
        result = XrapMsg.__new result, false
        result
      end
      
      # Receive and parse a xrap_msg from the socket. Returns new object,         
      # or NULL either if there was no input waiting, or the recv was interrupted.
      def self.recv_nowait input
        result = ::Zwebrap::FFI.xrap_msg_recv_nowait input
        result = XrapMsg.__new result, false
        result
      end
      
      # Send the xrap_msg to the output, and destroy it
      def self.send self_p, output
        self_p = self_p.__ptr_give_ref
        result = ::Zwebrap::FFI.xrap_msg_send self_p, output
        result
      end
      
      # Send the xrap_msg to the output, and destroy it
      def send_again output
        raise DestroyedError unless @ptr
        result = ::Zwebrap::FFI.xrap_msg_send_again @ptr, output
        result
      end
      
      # Get the xrap_msg id and printable command
      def id
        raise DestroyedError unless @ptr
        result = ::Zwebrap::FFI.xrap_msg_id @ptr
        result
      end
      
      # 
      def set_id id
        raise DestroyedError unless @ptr
        id = Integer(id)
        result = ::Zwebrap::FFI.xrap_msg_set_id @ptr, id
        result
      end
      
      # Get/set the parent field
      def parent
        raise DestroyedError unless @ptr
        result = ::Zwebrap::FFI.xrap_msg_parent @ptr
        result
      end
      
      # 
      def set_parent format, result
        raise DestroyedError unless @ptr
        format = String(format)
        result = ::Zwebrap::FFI.xrap_msg_set_parent @ptr, format, result
        result
      end
      
      # Get/set the content_type field
      def content_type
        raise DestroyedError unless @ptr
        result = ::Zwebrap::FFI.xrap_msg_content_type @ptr
        result
      end
      
      # 
      def set_content_type format, result
        raise DestroyedError unless @ptr
        format = String(format)
        result = ::Zwebrap::FFI.xrap_msg_set_content_type @ptr, format, result
        result
      end
      
      # Get/set the parent field
      def content_body
        raise DestroyedError unless @ptr
        result = ::Zwebrap::FFI.xrap_msg_content_body @ptr
        result
      end
      
      # 
      def set_content_body format, result
        raise DestroyedError unless @ptr
        format = String(format)
        result = ::Zwebrap::FFI.xrap_msg_set_content_body @ptr, format, result
        result
      end
      
      # Get/set the status_code field
      def status_code
        raise DestroyedError unless @ptr
        result = ::Zwebrap::FFI.xrap_msg_status_code @ptr
        result
      end
      
      # 
      def set_status_code status_code
        raise DestroyedError unless @ptr
        result = ::Zwebrap::FFI.xrap_msg_set_status_code @ptr, status_code
        result
      end
      
      # Get/set the location field
      def location
        raise DestroyedError unless @ptr
        result = ::Zwebrap::FFI.xrap_msg_location @ptr
        result
      end
      
      # 
      def set_location format, result
        raise DestroyedError unless @ptr
        format = String(format)
        result = ::Zwebrap::FFI.xrap_msg_set_location @ptr, format, result
        result
      end
      
      # Get/set the etag field
      def etag
        raise DestroyedError unless @ptr
        result = ::Zwebrap::FFI.xrap_msg_etag @ptr
        result
      end
      
      # 
      def set_etag format, result
        raise DestroyedError unless @ptr
        format = String(format)
        result = ::Zwebrap::FFI.xrap_msg_set_etag @ptr, format, result
        result
      end
      
      # Get/set the date_modified field
      def date_modified
        raise DestroyedError unless @ptr
        result = ::Zwebrap::FFI.xrap_msg_date_modified @ptr
        result
      end
      
      # 
      def set_data_modified data_modified
        raise DestroyedError unless @ptr
        result = ::Zwebrap::FFI.xrap_msg_set_data_modified @ptr, data_modified
        result
      end
      
      # Get/set the resource field
      def resource
        raise DestroyedError unless @ptr
        result = ::Zwebrap::FFI.xrap_msg_resource @ptr
        result
      end
      
      # 
      def set_resource format, result
        raise DestroyedError unless @ptr
        format = String(format)
        result = ::Zwebrap::FFI.xrap_msg_set_resource @ptr, format, result
        result
      end
      
      # Get/set the parameters field
      def parameters_string key, default_value
        raise DestroyedError unless @ptr
        key = String(key)
        default_value = String(default_value)
        result = ::Zwebrap::FFI.xrap_msg_parameters_string @ptr, key, default_value
        result
      end
      
      # 
      def parameters_insert key, format, result
        raise DestroyedError unless @ptr
        key = String(key)
        format = String(format)
        result = ::Zwebrap::FFI.xrap_msg_parameters_insert @ptr, key, format, result
        result
      end
      
      # Get/set the if_modified_since field
      def if_modified_since
        raise DestroyedError unless @ptr
        result = ::Zwebrap::FFI.xrap_msg_if_modified_since @ptr
        result
      end
      
      # 
      def set_if_modified_since if_modified_since
        raise DestroyedError unless @ptr
        result = ::Zwebrap::FFI.xrap_msg_set_if_modified_since @ptr, if_modified_since
        result
      end
      
      # Get/set the if_none_match field
      def if_none_match
        raise DestroyedError unless @ptr
        result = ::Zwebrap::FFI.xrap_msg_if_none_match @ptr
        result
      end
      
      # 
      def set_if_none_match format, result
        raise DestroyedError unless @ptr
        format = String(format)
        result = ::Zwebrap::FFI.xrap_msg_set_if_none_match @ptr, format, result
        result
      end
      
      # Get/set the parameters field
      def metadata_string key, default_value
        raise DestroyedError unless @ptr
        key = String(key)
        default_value = String(default_value)
        result = ::Zwebrap::FFI.xrap_msg_metadata_string @ptr, key, default_value
        result
      end
      
      # 
      def metadata_insert key, format, result
        raise DestroyedError unless @ptr
        key = String(key)
        format = String(format)
        result = ::Zwebrap::FFI.xrap_msg_metadata_insert @ptr, key, format, result
        result
      end
      
      # Get/set the if_unmodified_since field
      def if_unmodified_since
        raise DestroyedError unless @ptr
        result = ::Zwebrap::FFI.xrap_msg_if_unmodified_since @ptr
        result
      end
      
      # 
      def set_if_unmodified_since if_unmodified_since
        raise DestroyedError unless @ptr
        result = ::Zwebrap::FFI.xrap_msg_set_if_unmodified_since @ptr, if_unmodified_since
        result
      end
      
      # Get/set the if_match field
      def if_match
        raise DestroyedError unless @ptr
        result = ::Zwebrap::FFI.xrap_msg_if_match @ptr
        result
      end
      
      # 
      def set_if_match format, result
        raise DestroyedError unless @ptr
        format = String(format)
        result = ::Zwebrap::FFI.xrap_msg_set_if_match @ptr, format, result
        result
      end
      
      # Get/set the status_text field
      def status_text
        raise DestroyedError unless @ptr
        result = ::Zwebrap::FFI.xrap_msg_status_text @ptr
        result
      end
      
      # 
      def set_status_text format, result
        raise DestroyedError unless @ptr
        format = String(format)
        result = ::Zwebrap::FFI.xrap_msg_set_status_text @ptr, format, result
        result
      end
      
      # Self test of this class.
      def self.test verbose
        verbose = !(0==verbose||!verbose) # boolean
        result = ::Zwebrap::FFI.xrap_msg_test verbose
        result
      end
    end
    
  end
end

################################################################################
#  THIS FILE IS 100% GENERATED BY ZPROJECT; DO NOT EDIT EXCEPT EXPERIMENTALLY  #
#  Please refer to the README for information about making permanent changes.  #
################################################################################
