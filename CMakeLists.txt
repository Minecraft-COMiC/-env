cmake_minimum_required(VERSION 3.0)
set(CMAKE_C_STANDARD 99)

add_library(
        __COMiC_env
        SHARED

        env.def

        src/instance.c
        src/static.c
)

target_link_libraries(__COMiC_env PUBLIC COMiC::os)
target_include_directories(__COMiC_env PUBLIC include)
set_target_properties(__COMiC_env PROPERTIES LINKER_LANGUAGE C)
set_target_properties(__COMiC_env PROPERTIES OUTPUT_NAME env)

install(
        TARGETS __COMiC_env
        ARCHIVE DESTINATION ./lib
        LIBRARY DESTINATION ./
        RUNTIME DESTINATION ./
        PUBLIC_HEADER DESTINATION ./include
)
add_library(COMiC::env ALIAS __COMiC_env)