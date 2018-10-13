#include "ros/ros.h"
#include "service/abc.h"
#include <cstdlib>

int main(int argc, char **argv)
{
  ros::init(argc, argv, "gyx_client");
  if (argc != 4)
  {
    ROS_INFO("usage: add_three_ints_client a b c");
    return 1;
  }

  ros::NodeHandle n;
  ros::ServiceClient client = n.serviceClient<service::abc>("add_three_ints");
  service::abc srv;
  srv.request.a = atoll(argv[1]);
  srv.request.b = atoll(argv[2]);
  srv.request.c = atoll(argv[3]);
  if (client.call(srv))
  {
    ROS_INFO("Sum: %ld", (long int)srv.response.sum);
  }
  else
  {
    ROS_ERROR("Failed to call service add_three_ints");
    return 1;
  }

  return 0;
}
