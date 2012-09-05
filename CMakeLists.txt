cmake_minimum_required (VERSION 2.6) 
project (qt-moul-chat) 

find_package(Qt4 REQUIRED)
find_package(HSPlasmaNet REQUIRED)
find_package(OpenSSL REQUIRED)

include_directories("${HSPlasmaNet_INCLUDE_DIRS}")
include_directories("${HSPlasma_INCLUDE_DIRS}")

include_directories(${OPENSSL_INCLUDE_DIR})

# Set up Qt requirements
INCLUDE(${QT_USE_FILE})
ADD_DEFINITIONS(${QT_DEFINITIONS})

add_subdirectory(Net)

set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} ${CMAKE_CURRENT_SOURCE_DIR}/cmake-modules)

set(main_SOURCES Main.cpp)


add_executable (qt-moul-chat ${main_SOURCES}) 
target_link_libraries (qt-moul-chat Net HSPlasmaNet HSPlasma ${QT_LIBRARIES}) 