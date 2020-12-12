find_package(Boost 1.71.0 REQUIRED COMPONENTS filesystem system)
if(Boost_FOUND)
    message ("boost found")
else()
    message (FATAL_ERROR "Cannot find Boost")
endif()
add_executable(std-boost-string main.cpp std_string_queue.cpp boost_string_queue.cpp)
target_link_libraries(std-boost-string
    PRIVATE
        Boost::filesystem
)
