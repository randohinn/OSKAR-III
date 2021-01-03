cmake_minimum_required(VERSION 3.0.2)
project(oskar_driver)
# add_compile_options(-std=c++11)

find_package(catkin REQUIRED COMPONENTS
  roscpp
  rospy
  std_msgs
  serial
)

catkin_package()

include_directories(
  include
  ${catkin_INCLUDE_DIRS}
)

file(GLOB_RECURSE SOURCES  "src/*.cpp")
add_executable(ahhaa_oskar_driver_node
  ${SOURCES}
) 

target_link_libraries(ahhaa_oskar_driver_node ${catkin_LIBRARIES})
