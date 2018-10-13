#include "ros/ros.h"
#include "std_msgs/String.h"


void dianracingCallback(const std_msgs::String::ConstPtr& msg)
{
  ROS_INFO("I heard: [%s]", msg->data.c_str());
}

int main(int argc, char **argv)
{
  
  ros::init(argc, argv, "gyx_subscriber");

  
  ros::NodeHandle n;


  ros::Subscriber sub = n.subscribe("dianracing", 1000, dianracingCallback);

  
  ros::spin();

  return 0;
}
