add_library(SwiftUWP STATIC ImportWindowsRuntime.swift)

target_link_libraries(SwiftUWP PUBLIC
    SwiftUWP_ABI
    WindowsRuntime)