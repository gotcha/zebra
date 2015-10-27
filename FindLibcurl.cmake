################################################################################
#  THIS FILE IS 100% GENERATED BY ZPROJECT; DO NOT EDIT EXCEPT EXPERIMENTALLY  #
#  Please refer to the README for information about making permanent changes.  #
################################################################################

if (NOT MSVC)
  include(FindPkgConfig)
  pkg_check_modules(PC_LIBCURL "libcurl")
  if (NOT PC_LIBCURL_FOUND)
    pkg_check_modules(PC_LIBCURL "libcurl")
  endif(NOT PC_LIBCURL_FOUND)
  if (PC_LIBCURL_FOUND)
    # some libraries install the headers is a subdirectory of the include dir
    # returned by pkg-config, so use a wildcard match to improve chances of finding
    # headers and SOs.
    set(LIBCURL_INCLUDE_HINTS ${PC_LIBCURL_INCLUDE_DIRS} ${PC_LIBCURL_INCLUDE_DIRS}/*)
    set(LIBCURL_LIBRARY_HINTS ${PC_LIBCURL_LIBRARY_DIRS} ${PC_LIBCURL_LIBRARY_DIRS}/*)
  endif(PC_LIBCURL_FOUND)
endif (NOT MSVC)

find_path(
    LIBCURL_INCLUDE_DIRS
    NAMES libcurl.h
    HINTS ${PC_LIBCURL_INCLUDE_HINTS}
)

find_library(
    LIBCURL_LIBRARIES
    NAMES libcurl
    HINTS ${PC_LIBCURL_LIBRARY_HINTS}
)

include(FindPackageHandleStandardArgs)
find_package_handle_standard_args(
  LIBCURL
  FOUND_VAR LIBCURL_FOUND
  REQUIRED_VARS LIBCURL_LIBRARIES LIBCURL_INCLUDE_DIRS
)
mark_as_advanced(LIBCURL_FOUND LIBCURL_LIBRARIES LIBCURL_INCLUDE_DIRS)

################################################################################
#  THIS FILE IS 100% GENERATED BY ZPROJECT; DO NOT EDIT EXCEPT EXPERIMENTALLY  #
#  Please refer to the README for information about making permanent changes.  #
################################################################################
