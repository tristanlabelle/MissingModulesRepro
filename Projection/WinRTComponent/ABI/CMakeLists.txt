add_library(SwiftWinRTComponent_ABI INTERFACE)

target_include_directories(SwiftWinRTComponent_ABI INTERFACE
    include)

target_link_libraries(SwiftWinRTComponent_ABI INTERFACE
    WindowsRuntime_ABI
    SwiftUWP_ABI)