cmake_minimum_required(VERSION 3.23.0)

set(CMAKE_CXX_STANDARD 17)

project(DynamicChess)

add_subdirectory(src/api)

target_include_directories(${PROJECT_NAME} INTERFACE ${CMAKE_CURRENT_SOURCE_DIR})

target_link_libraries(${PROJECT_NAME} DynamicChessApi)

include_directories(
        ${PROJECT_SOURCE_DIR}/include/
)