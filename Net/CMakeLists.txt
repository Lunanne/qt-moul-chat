include_directories("${HSPlasmaNet_INCLUDE_DIRS}")
include_directories("${HSPlasma_INCLUDE_DIRS}")
add_library(Net ServerCommunication.h ServerCommunication.cpp)
target_link_libraries(Net HSPlasmaNet HSPlasma)