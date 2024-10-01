file(GLOB_RECURSE SOURCES *.swift)

add_library(SwiftWinRTComponent STATIC ${SOURCES})

set_target_properties(SwiftWinRTComponent PROPERTIES Swift_MODULE_NAME WinRTComponent)

target_link_libraries(SwiftWinRTComponent PUBLIC
    SwiftWinRTComponent_ABI
    WindowsRuntime
    SwiftUWP)