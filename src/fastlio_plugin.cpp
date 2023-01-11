#include "fastlio_plugin.h"
#include "laserMapping.h"
#include <boost/thread.hpp>
#include <pluginlib/class_list_macros.h>

fastlio_plugin::fastlio_plugin(){

}

void fastlio_plugin::onInit(){
  NODELET_INFO("fastlio_plugin - %s", __FUNCTION__);
  boost::shared_ptr<boost::thread> spinThread;
  spinThread = boost::make_shared<boost::thread>(&mainLIOFunction);
}

PLUGINLIB_EXPORT_CLASS(fastlio_plugin,nodelet::Nodelet);