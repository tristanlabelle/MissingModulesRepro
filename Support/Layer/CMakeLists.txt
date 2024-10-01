add_library(Layer STATIC Layer.swift)
target_link_libraries(Layer PUBLIC ImportLeaves)
target_link_libraries(Layer PRIVATE LeafC)