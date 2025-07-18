# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\mytcpclient_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\mytcpclient_autogen.dir\\ParseCache.txt"
  "mytcpclient_autogen"
  )
endif()
