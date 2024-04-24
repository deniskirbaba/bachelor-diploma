# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_nspu_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED nspu_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(nspu_FOUND FALSE)
  elseif(NOT nspu_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(nspu_FOUND FALSE)
  endif()
  return()
endif()
set(_nspu_CONFIG_INCLUDED TRUE)

# output package information
if(NOT nspu_FIND_QUIETLY)
  message(STATUS "Found nspu: 0.0.0 (${nspu_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'nspu' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${nspu_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(nspu_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${nspu_DIR}/${_extra}")
endforeach()
