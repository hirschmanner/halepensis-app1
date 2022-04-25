// ROS headers
#include <ros/ros.h>
#include <sensor_msgs/PointCloud2.h>
#include <pcl_ros/transforms.h>
#include <tf/transform_listener.h>

// PCL headers
#include <pcl/point_cloud.h>

// Std C++ headers
#include <string>

namespace cpv {

} // cpv

int main(int argc, char** argv) 
{
  ros::init (argc, argv, "segment_table");

  ros::NodeHandle nh, pnh("~");

  if (!ros::Time::waitForValid(ros::WallDuration(10.0))) // NOTE: Important when using simulated clock
  {
    ROS_FATAL("Timed-out waiting for valid time.");
    return EXIT_FAILURE;
  }

  pcl::console::setVerbosityLevel(pcl::console::L_ERROR);

    // pal::SegmentPlane locator(nh, pnh);

  std::cout << "It works!" << std::endl;

//   locator.run();

  return 0;
}