cmake_minimum_required(VERSION 3.30.0)

project(MissingModulesRepro LANGUAGES C Swift)

add_library(LeafSwift STATIC Empty.swift)

add_library(LeafC INTERFACE)
target_include_directories(LeafC INTERFACE LeafC)

add_subdirectory(ImportLeaves) # If the subdirectory's CMakeLists.txt is inlined, the build succeeds

add_subdirectory(Layer) # If the subdirectory's CMakeLists.txt is inlined, the build succeeds

# Building ImportLayer will fail with "error: missing required modules: 'LeafC', 'LeafSwift'"
add_library(ImportLayer STATIC ImportLayer.swift)
target_link_libraries(ImportLayer PUBLIC Layer)
