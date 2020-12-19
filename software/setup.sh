#!/bin/bash

echo "Set up OSKAR-III master node"
echo -n "Choose setup type: 1. Real master (with VNC) 2. Local dev (without VNC): 1"
read type
sudo apt update && sudo apt upgrade -y
sudo sh -c 'echo "deb http://packages.ros.org/ros/ubuntu $(lsb_release -sc) main" > /etc/apt/sources.list.d/ros-latest.list'
sudo apt-key adv --keyserver 'hkp://keyserver.ubuntu.com:80' --recv-key C1CF6E31E6BADE8868B172B4F42ED6FBAB17C654
sudo apt update
sudo apt install ros-melodic-desktop-full -y
echo "source /opt/ros/melodic/setup.bash" >> ~/.bashrc
source ~/.bashrc
sudo apt install python-rosdep python-rosinstall python-rosinstall-generator python-wstool build-essential -y
sudo rosdep init
rosdep update
echo "ROS setup complete! Now sourcing your workspace from this folder permanently"
source devel/setup.bash
echo "source $(pwd)/devel/setup.bash" >> ~/.bashrc
