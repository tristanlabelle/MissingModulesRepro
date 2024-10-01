add_library(SwiftUWP_WindowsStorageStreams STATIC
    Aliases.swift)

set_target_properties(SwiftUWP_WindowsStorageStreams PROPERTIES Swift_MODULE_NAME UWP_WindowsStorageStreams)

target_link_libraries(SwiftUWP_WindowsStorageStreams PUBLIC
    SwiftUWP)