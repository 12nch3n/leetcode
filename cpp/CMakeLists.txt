cmake_minimum_required(VERSION 3.0.0)
project(YINLC)

add_definitions("-std=c++17")

include(${CMAKE_CURRENT_SOURCE_DIR}/conanbuildinfo.cmake)
conan_basic_setup()

add_subdirectory(./yleet)
list(APPEND Y_LIBS yleet)
list(APPEND Y_INCLUDES include)

link_directories(${PROJECT_SOURCE_DIR}/lib)
aux_source_directory(./test ALL_TESTS)
add_executable(yleet.test ${ALL_TESTS} )
target_link_libraries(yleet.test ${CONAN_LIBS})
target_link_libraries(yleet.test ${Y_LIBS})
target_include_directories(yleet.test PUBLIC ${Y_INCLUDES})

add_test(NAME yleet.test 
     WORKING_DIRECTORY ${CMAKE_BINARY_DIR}/bin 
     COMMAND yleet.test )
    