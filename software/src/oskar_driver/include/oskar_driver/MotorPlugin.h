#ifndef MOTORPLUGIN_H
#define MOTORPLUGIN_H
#include <ros/ros.h>
#include <oskar_driver/Plugin.h>

namespace ahhaa_oskar {
    class MotorPlugin : public Plugin {
        public:
            MotorPlugin(BoardComms* comms, std::string name);
            ~MotorPlugin();
    };
}

#endif