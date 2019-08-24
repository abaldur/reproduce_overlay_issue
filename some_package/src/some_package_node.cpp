#include "ros/ros.h"

#include <dynamic_reconfigure/server.h>
#include <some_package/TutorialsConfig.h>

int main(int argc, char **argv)
{
  ros::init(argc, argv, "some_package");
  ros::NodeHandle n;

  // PASSING THE 2ND ARGUMENT MAKES IT FAIL AS THAT HAS BEEN ADDED
  // TO THE OVERLAYED CONSTRUCTOR.
  dynamic_reconfigure::Server<some_package::TutorialsConfig> server(n, true);

  ros::spin();

  return 0;
}