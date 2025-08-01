cmake_minimum_required(VERSION 3.16)

project(mytcpserver LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Core Network)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Core Network)

add_executable(mytcpserver
  main.cpp
  mytcpserver.h mytcpserver.cpp
)
target_link_libraries(mytcpserver Qt${QT_VERSION_MAJOR}::Core
Qt${QT_VERSION_MAJOR}::Network)

include(GNUInstallDirs)
install(TARGETS mytcpserver
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
