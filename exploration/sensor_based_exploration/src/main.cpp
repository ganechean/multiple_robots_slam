#include <ros/ros.h>
#include <sensor_based_exploration/core.h>

int main(int argc, char *argv[])
{
    ros::init(argc, argv, "sensor_based_exploration");

    sensor_based_exploration::Core sc;

    if(sc.getGoal()){
        sc.moveToGoal();
    }
    
    return 0;
}