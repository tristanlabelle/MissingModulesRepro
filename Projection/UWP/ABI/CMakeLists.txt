add_library(SwiftUWP_ABI INTERFACE)

target_include_directories(SwiftUWP_ABI INTERFACE
    include)

target_link_libraries(SwiftUWP_ABI INTERFACE
    WindowsRuntime_ABI)