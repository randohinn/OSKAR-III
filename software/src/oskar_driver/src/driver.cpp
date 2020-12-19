#include <oskar_driver/driver.h>

namespace ahhaa_oskar {

    Driver::Driver() {
        ROS_INFO("Initializing OSKAR-III driver");

        timer_ = nh_.createTimer(ros::Duration(0.01), &Driver::update, this);
    }

    Driver::~Driver() {

    }

    void Driver::update(const ros::TimerEvent& event) {

    }

}
