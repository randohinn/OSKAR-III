#include <oskar_driver/driver.h>

namespace ahhaa_oskar {

    Driver::Driver() {
        ROS_INFO("Initializing Oskar-III driver");

        timer_ = nh_.createTimer(ros::Duration(0.01), &Driver::update, this);
    }

    Driver::~Driver() {
        ROS_INFO("Killing Oskar-III driver");
    }

    void Driver::update(const ros::TimerEvent& event) {
        ROS_INFO("Oskar III Update");

    }

}
