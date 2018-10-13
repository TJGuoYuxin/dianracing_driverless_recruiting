#include "ros/ros.h"
#include "service/abc.h"

bool add(service::abc::Request  &req,
         service::abc::Response &res)
{
  res.sum = (req.a + req.b)*req.c;
  ROS_INFO("request: x=%ld, y=%ld, z=%ld", (long int)req.a, (long int)req.b,(long int)req.c);
  ROS_INFO("sending back response: [%ld]", (long int)res.sum);
  return true;
}

int main(int argc, char **argv)
{
  ros::init(argc, argv, "gyx_server");
  ros::NodeHandle n;

  ros::ServiceServer service = n.advertiseService("add_three_ints", add);
  ROS_INFO("Ready to add three ints.");
  ros::spin();

  return 0;
}

