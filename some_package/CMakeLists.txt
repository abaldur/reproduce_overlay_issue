cmake_minimum_required(VERSION 2.8.3)
project(some_package)

## Compile as C++11, supported in ROS Kinetic and newer
# add_compile_options(-std=c++11)

find_package(catkin REQUIRED COMPONENTS
    rospy
    roscpp
    dynamic_reconfigure
)

generate_dynamic_reconfigure_options(
  cfg/Tutorials.cfg
)

catkin_package(
#  INCLUDE_DIRS include
#  LIBRARIES some_package
#  CATKIN_DEPENDS other_catkin_pkg
#  DEPENDS system_lib
)

include_directories(
  ${catkin_INCLUDE_DIRS}
)

add_executable(${PROJECT_NAME}_node src/some_package_node.cpp)
add_dependencies(${PROJECT_NAME}_node ${${PROJECT_NAME}_EXPORTED_TARGETS} ${catkin_EXPORTED_TARGETS})
target_link_libraries(${PROJECT_NAME}_node ${catkin_LIBRARIES} )