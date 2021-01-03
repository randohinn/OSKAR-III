#include <oskar_driver/MotorPlugin.h>

namespace ahhaa_oskar {
    MotorPlugin::MotorPlugin(BoardComms* comms, std::string name) : Plugin(comms,name) {

    }

    MotorPlugin::~MotorPlugin() {}
}