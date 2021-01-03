#include <oskar_driver/BoardComms.h>

namespace ahhaa_oskar {

    BoardComms::BoardComms(std::string portName, int baudrate) {
        this->serial_.setPort(portName);
        this->serial_.setBaudrate(baudrate);
        serial::Timeout timeout = serial::Timeout::simpleTimeout(1000);
        serial_.setTimeout(timeout);
    
        this->tryConnect();

        this->timer_ = nh_.createTimer(ros::Duration(.5), &BoardComms::reconnect, this);
    }


    BoardComms::~BoardComms() {
        this->serial_.close();
        this->serial_.~Serial();
    }

    void BoardComms::tryConnect() {
        if(this->serial_.isOpen()) {
            this->serial_.close();
        }
        try {
            this->serial_.open();
            ROS_INFO("Serial port to board opened successfully");
        } catch (serial::IOException e) {
            ROS_ERROR_STREAM_THROTTLE(1, "Unable to open port '" << this->serial_.getPort() << "': " << e.what());
        } catch (serial::SerialException e) {
            ROS_ERROR_STREAM_THROTTLE(1, "Unable to open port '" << this->serial_.getPort() << "': " << e.what());
        }
    }

    void BoardComms::reconnect(const ros::TimerEvent& event) {
        if(!serial_.isOpen()) {
            ROS_INFO("Serial port attempting reconnection");
            tryConnect();
        }
    }

}