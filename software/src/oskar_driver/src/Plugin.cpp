#include <oskar_driver/Plugin.h>

namespace ahhaa_oskar {
    Plugin::Plugin(BoardComms* comms, std::string name): name(name), comms(comms) {
        ROS_INFO("Created plugin %s\n", name.c_str());        
    }

    Plugin::~Plugin() {

    }

    std::string Plugin::getName() {
        return this->name;
    }
}