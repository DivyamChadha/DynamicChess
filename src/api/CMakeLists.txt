add_library(
    DynamicChessApi 
    board.cpp
    )

target_include_directories(DynamicChessApi PUBLIC "${PROJECT_SOURCE_DIR}/include/api")