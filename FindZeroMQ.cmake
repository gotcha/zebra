################################################################################
#  THIS FILE IS 100% GENERATED BY ZPROJECT; DO NOT EDIT EXCEPT EXPERIMENTALLY  #
#  Please refer to the README for information about making permanent changes.  #
################################################################################

if (NOT MSVC)
  include(FindPkgConfig)
  pkg_check_modules(PC_ZEROMQ "libzmq")
  if (NOT PC_ZEROMQ_FOUND)
    pkg_check_modules(PC_ZEROMQ "zmq")
  endif(NOT PC_ZEROMQ_FOUND)
  if (PC_ZEROMQ_FOUND)
    # some libraries install the headers is a subdirectory of the include dir
    # returned by pkg-config, so use a wildcard match to improve chances of finding
    # headers and SOs.
    set(ZEROMQ_INCLUDE_HINTS ${PC_ZEROMQ_INCLUDE_DIRS} ${PC_ZEROMQ_INCLUDE_DIRS}/*)
    set(ZEROMQ_LIBRARY_HINTS ${PC_ZEROMQ_LIBRARY_DIRS} ${PC_ZEROMQ_LIBRARY_DIRS}/*)
  endif(PC_ZEROMQ_FOUND)
endif (NOT MSVC)

find_path(
    ZEROMQ_INCLUDE_DIRS
    NAMES zmq.h
    HINTS ${PC_ZEROMQ_INCLUDE_HINTS}
)

find_library(
    ZEROMQ_LIBRARIES
    NAMES zmq
    HINTS ${PC_ZEROMQ_LIBRARY_HINTS}
)

include(FindPackageHandleStandardArgs)
find_package_handle_standard_args(
  ZEROMQ
  FOUND_VAR ZEROMQ_FOUND
  REQUIRED_VARS ZEROMQ_LIBRARIES ZEROMQ_INCLUDE_DIRS
)
mark_as_advanced(ZEROMQ_FOUND ZEROMQ_LIBRARIES ZEROMQ_INCLUDE_DIRS)

################################################################################
#  THIS FILE IS 100% GENERATED BY ZPROJECT; DO NOT EDIT EXCEPT EXPERIMENTALLY  #
#  Please refer to the README for information about making permanent changes.  #
################################################################################
