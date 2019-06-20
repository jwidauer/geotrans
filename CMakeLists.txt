cmake_minimum_required(VERSION 3.8.2)
project(geotrans VERSION 3.7 LANGUAGES CXX)

file(GLOB_RECURSE sources ${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp)

add_library(geotrans
  ${sources}
)

FILE(GLOB_RECURSE new_list ${CMAKE_CURRENT_SOURCE_DIR}/src/*.h)
SET(dir_list "")
FOREACH(file_path ${new_list})
  GET_FILENAME_COMPONENT(dir_path ${file_path} PATH)
  SET(dir_list ${dir_list} ${dir_path})
ENDFOREACH()
LIST(REMOVE_DUPLICATES dir_list)

target_include_directories(geotrans
  PUBLIC
      ${dir_list}
)

# get_target_property(include_dirs geotrans INCLUDE_DIRECTORIES)
# message(STATUS "include dirs: " ${include_dirs})

target_compile_features(geotrans PRIVATE cxx_std_98)
