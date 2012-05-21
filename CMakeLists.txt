cmake_minimum_required (VERSION 2.6) 
project (qt-moul-chat) 

find_package(HSPlasmaNet)
include_directories("${HSPlasmaNet_INCLUDE_DIRS}")
include_directories("${HSPlasma_INCLUDE_DIRS}")

find_package(OpenSSL)
include_directories(${OPENSSL_INCLUDE_DIR})
if(NOT OPENSSL_FOUND)
    message(FATAL_ERROR "OpenSSL has not been found. You will need it to continue build with hsPlasmaNet enabled. Please either install OpenSSL or disable hsPlasmaNet.")
endif(NOT OPENSSL_FOUND)

add_subdirectory(Net)

set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} ${CMAKE_CURRENT_SOURCE_DIR}/cmake-modules)

set(main_SOURCES Main.cpp)


add_executable (qt-moul-chat ${main_SOURCES}) 
target_link_libraries (qt-moul-chat Net HSPlasmaNet HSPlasma) 