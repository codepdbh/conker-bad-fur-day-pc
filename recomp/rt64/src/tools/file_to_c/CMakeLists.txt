cmake_minimum_required(VERSION 3.20)
project(file_to_c)
set(CMAKE_CXX_STANDARD 17)

if (CMAKE_CROSSCOMPILING)
    add_custom_command(
        OUTPUT ${CMAKE_BINARY_DIR}/file_to_c_host
        COMMAND g++ -std=c++17 ${CMAKE_CURRENT_SOURCE_DIR}/file_to_c.cpp -o ${CMAKE_BINARY_DIR}/file_to_c_host
        DEPENDS ${CMAKE_CURRENT_SOURCE_DIR}/file_to_c.cpp
    )
    add_custom_target(file_to_c_target ALL DEPENDS ${CMAKE_BINARY_DIR}/file_to_c_host)
    add_custom_target(file_to_c DEPENDS file_to_c_target)
else()
    add_executable(file_to_c "file_to_c.cpp")
    if (APPLE)
        set_target_properties(file_to_c PROPERTIES
            XCODE_ATTRIBUTE_CODE_SIGN_IDENTITY "-"
            XCODE_ATTRIBUTE_CODE_SIGN_ENTITLEMENTS ${CMAKE_CURRENT_SOURCE_DIR}/../../../rt64.entitlements
        )
    endif()
endif()
