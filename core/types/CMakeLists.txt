cmake_minimum_required(VERSION 3.1)

project(GenericType
        VERSION 1.0
        LANGUAGES CXX)

add_library(GenericTypeLib STATIC GenericType.cpp GenericType.h)

#target_include_directories(GenericTypeLib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
set_target_properties(GenericTypeLib PROPERTIES PUBLIC_HEADER GenericType.h)
set_target_properties(GenericTypeLib PROPERTIES OUTPUT_NAME generic-type)

install(TARGETS GenericTypeLib LIBRARY DESTINATION lib PUBLIC_HEADER DESTINATION include)