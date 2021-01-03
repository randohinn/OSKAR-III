#ifndef DRIVER_H
#define DRIVER_H
#include <ros/ros.h>
#include <oskar_driver/BoardComms.h>
#include <oskar_driver/Plugin.h>
#include <oskar_driver/MotorPlugin.h>
#include <vector>
namespace ahhaa_oskar {

    class Driver {
        public:
            Driver();
            ~Driver();
        
        private:
            void update(const ros::TimerEvent& event);

            std::vector<PluginPtr> plugins_;

            ros::Timer timer_;
            ros::NodeHandle nh_;

            BoardComms* bc;

    };

}

#endif