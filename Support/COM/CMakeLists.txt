add_library(COM STATIC Imports.swift)
target_link_libraries(COM PUBLIC ABIBindings COM_ABI)
target_link_libraries(COM PRIVATE SWRT_InternalABI)