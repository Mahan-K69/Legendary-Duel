cmake_minimum_required(VERSION 3.20)
project(unmatched VERSION 0.1.0 LANGUAGES CXX)

set(
    SOURCES
    main.cpp

)

add_executable(${PROJECT_NAME} ${SOURCES})
target_include_directories(${PROJECT_NAME} PUBLIC ${INCLUDE_DIRECTORIES}./include)

