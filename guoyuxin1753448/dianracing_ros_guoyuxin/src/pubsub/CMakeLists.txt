cmake_minimum_required(VERSION 2.8.3)
project(pubsub)


find_package(catkin REQUIRED COMPONENTS roscpp rospy std_msgs genmsg)






generate_messages(DEPENDENCIES std_msgs)


catkin_package()


include_directories(include ${catkin_INCLUDE_DIRS})

add_executable(gyx_publisher src/gyx_publisher.cpp)
target_link_libraries(gyx_publisher ${catkin_LIBRARIES})
add_dependencies(gyx_publisher pubsub_generate_messages_cpp)

add_executable(gyx_subscriber src/gyx_subscriber.cpp)
target_link_libraries(gyx_subscriber ${catkin_LIBRARIES})
add_dependencies(gyx_subscriber pubsub_generate_messages_cpp)
