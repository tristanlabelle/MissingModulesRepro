add_library(ImportLeaves STATIC "${CMAKE_SOURCE_DIR}/ImportLeaves.swift")
target_link_libraries(ImportLeaves PUBLIC LeafSwift)
target_link_libraries(ImportLeaves PRIVATE LeafC)