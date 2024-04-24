# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_bsu_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED bsu_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(bsu_FOUND FALSE)
  elseif(NOT bsu_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(bsu_FOUND FALSE)
  endif()
  return()
endif()
set(_bsu_CONFIG_INCLUDED TRUE)

# output package information
if(NOT bsu_FIND_QUIETLY)
  message(STATUS "Found bsu: 0.0.0 (${bsu_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'bsu' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${bsu_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(bsu_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${bsu_DIR}/${_extra}")
endforeach()
