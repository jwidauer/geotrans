cmake_minimum_required(VERSION 3.8.2)
project(geotrans VERSION 3.7 LANGUAGES CXX)

file(GLOB_RECURSE sources ${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp)

add_library(geotrans ${sources})

target_compile_features(geotrans PUBLIC cxx_std_17)
target_compile_options(geotrans
                       PRIVATE -Wall
                               -Wextra
                               -pedantic
                               -Werror)

file(GLOB_RECURSE new_list ${CMAKE_CURRENT_SOURCE_DIR}/src/*.h)
set(dir_list "")
foreach(file_path ${new_list})
  get_filename_component(dir_path ${file_path} PATH)
  set(dir_list ${dir_list} ${dir_path})
endforeach()
list(REMOVE_DUPLICATES dir_list)

target_include_directories(geotrans PUBLIC include ${dir_list})

target_compile_features(geotrans PRIVATE cxx_std_98)
