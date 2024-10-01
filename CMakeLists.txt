cmake_minimum_required(VERSION 3.30.0)

project(MissingModulesRepro LANGUAGES C Swift)

add_library(LeafSwift STATIC Empty.swift)

add_library(LeafC INTERFACE)
target_include_directories(LeafC INTERFACE LeafC)

add_subdirectory(ImportLeaves) # If the add_library is inlined, the bug doesn't repro
target_sources(ImportLeaves PRIVATE ImportLeaves.swift)
target_link_libraries(ImportLeaves PUBLIC LeafSwift)
target_link_libraries(ImportLeaves PRIVATE LeafC)

add_subdirectory(Layer) # If the add_library is inlined, the bug doesn't repro
target_sources(Layer PRIVATE Layer.swift)
target_link_libraries(Layer PUBLIC ImportLeaves)
target_link_libraries(Layer PRIVATE LeafC)

# Building ImportLayer will fail with "error: missing required modules: 'LeafC', 'LeafSwift'"
add_library(ImportLayer STATIC ImportLayer.swift)
target_link_libraries(ImportLayer PUBLIC Layer)
