file(GLOB_RECURSE SOURCES *.swift)

add_library(SwiftUWP STATIC ${SOURCES})

set_target_properties(SwiftUWP PROPERTIES Swift_MODULE_NAME UWP)

target_link_libraries(SwiftUWP PUBLIC
    SwiftUWP_ABI
    WindowsRuntime)