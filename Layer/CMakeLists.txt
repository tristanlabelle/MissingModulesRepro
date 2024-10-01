add_library(Layer STATIC "${CMAKE_SOURCE_DIR}/Layer.swift")
target_link_libraries(Layer PUBLIC ImportLeaves)
target_link_libraries(Layer PRIVATE LeafC)