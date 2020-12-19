#include <ros/ros.h>

int main(int argc, char** argv) {
  // Register a ROS node
  ros::init(argc, argv, "ahhaa_oskar_driver_node");
  ros::NodeHandle nh;

  // Create a driver instance
  // Driver drv;

  // Spin forever
  ros::spin();
}