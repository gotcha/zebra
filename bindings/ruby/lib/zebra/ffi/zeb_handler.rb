################################################################################
#  THIS FILE IS 100% GENERATED BY ZPROJECT; DO NOT EDIT EXCEPT EXPERIMENTALLY  #
#  Please refer to the README for information about making permanent changes.  #
################################################################################

module Zebra
  module FFI

    # Handler for XRAP requests
    # @note This class is 100% generated using zproject.
    class ZebHandler
      # Raised when one tries to use an instance of {ZebHandler} after
      # the internal pointer to the native object has been nullified.
      class DestroyedError < RuntimeError; end

      # Boilerplate for self pointer, initializer, and finalizer
      class << self
        alias :__new :new
      end
      # Attaches the pointer _ptr_ to this instance and defines a finalizer for
      # it if necessary.
      # @param ptr [::FFI::Pointer]
      # @param finalize [Boolean]
      def initialize(ptr, finalize = true)
        @ptr = ptr
        if @ptr.null?
          @ptr = nil # Remove null pointers so we don't have to test for them.
        elsif finalize
          @finalizer = self.class.create_finalizer_for @ptr
          ObjectSpace.define_finalizer self, @finalizer
        end
      end
      # @return [Proc]
      def self.create_finalizer_for(ptr)
        Proc.new do
          "WARNING: "\
          "Objects of type #{self} cannot be destroyed implicitly. "\
          "Please call the correct destroy method with the relevant arguments."
        end
      end
      # @return [Boolean]
      def null?
        !@ptr or @ptr.null?
      end
      # Return internal pointer
      # @return [::FFI::Pointer]
      def __ptr
        raise DestroyedError unless @ptr
        @ptr
      end
      # So external Libraries can just pass the Object to a FFI function which expects a :pointer
      alias_method :to_ptr, :__ptr
      # Nullify internal pointer and return pointer pointer.
      # @note This detaches the current instance from the native object
      #   and thus makes it unusable.
      # @return [::FFI::MemoryPointer] the pointer pointing to a pointer
      #   pointing to the native object
      def __ptr_give_ref
        raise DestroyedError unless @ptr
        ptr_ptr = ::FFI::MemoryPointer.new :pointer
        ptr_ptr.write_pointer @ptr
        __undef_finalizer if @finalizer
        @ptr = nil
        ptr_ptr
      end
      # Undefines the finalizer for this object.
      # @note Only use this if you need to and can guarantee that the native
      #   object will be freed by other means.
      # @return [void]
      def __undef_finalizer
        ObjectSpace.undefine_finalizer self
        @finalizer = nil
      end

      # Add a new offer this handler will handle. Returns 0 if successful,
      # otherwise -1.                                                     
      #
      # @param self_ [::FFI::Pointer, #to_ptr]
      # @param method [Integer, #to_int, #to_i]
      # @param uri [String, #to_s, nil]
      # @return [Integer]
      def self.add_offer(self_, method, uri)
        method = Integer(method)
        result = ::Zebra::FFI.zeb_handler_add_offer(self_, method, uri)
        result
      end

      # Add a new accept type that this handler can deliver. May be a regular
      # expression. Returns 0 if successfull, otherwise -1.                  
      #
      # @param self_ [::FFI::Pointer, #to_ptr]
      # @param accept [String, #to_s, nil]
      # @return [Integer]
      def self.add_accept(self_, accept)
        result = ::Zebra::FFI.zeb_handler_add_accept(self_, accept)
        result
      end

      # Self test of this class.
      #
      # @param verbose [Boolean]
      # @return [void]
      def self.test(verbose)
        verbose = !(0==verbose||!verbose) # boolean
        result = ::Zebra::FFI.zeb_handler_test(verbose)
        result
      end
    end
  end
end

################################################################################
#  THIS FILE IS 100% GENERATED BY ZPROJECT; DO NOT EDIT EXCEPT EXPERIMENTALLY  #
#  Please refer to the README for information about making permanent changes.  #
################################################################################
