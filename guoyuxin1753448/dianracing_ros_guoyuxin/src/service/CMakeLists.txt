cmake_minimum_required(VERSION 2.8.3)
project(service)

find_package(catkin REQUIRED COMPONENTS
  roscpp
  rospy
  std_msgs
message_generation)


add_service_files(
  FILES
abc.srv)

 generate_messages(
   DEPENDENCIES
   std_msgs
)



catkin_package(

)


include_directories(

  ${catkin_INCLUDE_DIRS}
)
add_executable(gyx_server src/gyx_server.cpp)
target_link_libraries(gyx_server ${catkin_LIBRARIES})
add_dependencies(gyx_server service_gencpp)

add_executable(gyx_client src/gyx_client.cpp)
target_link_libraries(gyx_client ${catkin_LIBRARIES})
add_dependencies(gyx_client service_gencpp)

