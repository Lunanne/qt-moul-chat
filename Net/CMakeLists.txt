include_directories("${HSPlasmaNet_INCLUDE_DIRS}")
include_directories("${HSPlasma_INCLUDE_DIRS}")

set(net_SOURCES
ServerCommunication.h
ServerCommunication.cpp
AuthClient.h
AuthClient.cpp
GateClient.h
GateClient.cpp)

add_library(Net ${net_SOURCES})

target_link_libraries(Net HSPlasmaNet HSPlasma)