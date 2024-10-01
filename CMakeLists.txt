cmake_minimum_required(VERSION 3.21.0)

project(SwiftWinRT LANGUAGES C Swift)

add_library(LeafSwift STATIC Empty.swift)

add_library(LeafC INTERFACE)
target_include_directories(LeafC INTERFACE LeafC)

add_subdirectory(ImportLeaves)
add_subdirectory(Layer)

add_library(ImportLayer STATIC ImportLayer.swift)
target_link_libraries(ImportLayer PUBLIC Layer)
