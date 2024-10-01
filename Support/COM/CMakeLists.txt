add_library(COM STATIC Imports.swift)
target_link_libraries(COM PUBLIC LeafSwift)
target_link_libraries(COM PRIVATE LeafC)