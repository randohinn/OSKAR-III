#ifndef DRIVER_H
#define DRIVER_H
#include <ros/ros.h>

namespace ahhaa_oskar {

    class Driver {
        public:
            Driver();
            ~Driver();
        
        private:
            void update(const ros::TimerEvent& event);

            ros::Timer timer_;
    }

}

#endif