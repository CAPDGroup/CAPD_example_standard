cmake_minimum_required(VERSION 3.10)
project(capd_example)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_EXPORT_COMPILE_COMMANDS YES)

if(NOT DEFINED CAPD_PREFIX)
    message(FATAL_ERROR "CAPD prefix not defined!")
endif()

add_executable(${PROJECT_NAME} src/main.cpp)

execute_process(
    COMMAND ${CAPD_PREFIX}/bin/capd-config --cflags
    OUTPUT_VARIABLE CAPD_CFLAGS )

execute_process(
    COMMAND ${CAPD_PREFIX}/bin/capd-config --libs
    OUTPUT_VARIABLE CAPD_LIBS )

message(STATUS "CAPD cflags : ${CAPD_CFLAGS}")
message(STATUS "CAPD libs   : ${CAPD_LIBS}")

separate_arguments(CAPD_CFLAGS UNIX_COMMAND "${CAPD_CFLAGS}")
separate_arguments(CAPD_LIBS UNIX_COMMAND "${CAPD_LIBS}")

target_compile_options(${PROJECT_NAME} PRIVATE -Wall -Wextra ${CAPD_CFLAGS})
target_link_libraries(${PROJECT_NAME} PRIVATE -static ${CAPD_LIBS})
