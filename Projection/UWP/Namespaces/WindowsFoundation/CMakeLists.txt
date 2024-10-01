add_library(SwiftUWP_WindowsFoundation STATIC
    Aliases.swift)

set_target_properties(SwiftUWP_WindowsFoundation PROPERTIES Swift_MODULE_NAME UWP_WindowsFoundation)

target_link_libraries(SwiftUWP_WindowsFoundation PUBLIC
    SwiftUWP)