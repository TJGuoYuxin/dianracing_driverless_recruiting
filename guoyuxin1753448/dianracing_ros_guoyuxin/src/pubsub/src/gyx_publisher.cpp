#include "ros/ros.h"
#include "std_msgs/String.h"

#include <sstream>
std::string binary(int i){
  std::string j="";
    while(i!=0){
if(i%2==1){
   j="1"+j;}
else{
   j="0"+j;
    }
i=i/2;
}
return j;
}


int main(int argc, char **argv)
{
  
  ros::init(argc, argv, "gyx_publisher");

  
  ros::NodeHandle n;

  ros::Publisher dianracing_pub = n.advertise<std_msgs::String>("dianracing", 1000);

  ros::Rate loop_rate(1);

 
  int count = 1;
  while (ros::ok())
  {

    std_msgs::String msg;

    std::stringstream ss;
    ss << "driveless gogogo!No. " << binary(count);
    msg.data = ss.str();

    ROS_INFO("%s", msg.data.c_str());

    
    dianracing_pub.publish(msg);

    ros::spinOnce();

    loop_rate.sleep();
    ++count;
  }


  return 0;
}
