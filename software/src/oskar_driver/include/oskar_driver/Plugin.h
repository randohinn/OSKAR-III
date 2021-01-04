#ifndef PLUGIN_H
#define PLUGIN_H
#include <oskar_driver/BoardComms.h>
#include <ros/ros.h>
#include <nlohmann/json.hpp>
#include <string.h>

using json = nlohmann::json;

namespace ahhaa_oskar {
    class Plugin {
        public:
            Plugin(BoardComms* comms, std::string name);
            ~Plugin();

            std::string getName();

        private:
            json data;
            std::string name;
            BoardComms* comms;
            ros::NodeHandle nh_;
    };
    typedef std::shared_ptr<Plugin> PluginPtr;
}

#endif