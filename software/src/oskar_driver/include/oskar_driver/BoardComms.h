#ifndef BOARDCOMMS_H
#define BOARDCOMMS_H
#include <serial/serial.h>
#include <ros/ros.h>
#include <string.h>

namespace ahhaa_oskar {

    class BoardComms {
        public:
            BoardComms(std::string portName, int baudrate);
            ~BoardComms();

        private:
            void tryConnect();
            void reconnect(const ros::TimerEvent& event);
            serial::Serial serial_;
            ros::NodeHandle nh_;
            ros::Timer timer_;
            

    };

}

#endif