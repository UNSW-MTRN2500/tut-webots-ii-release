#pragma once

#include <vector>

#include <webots/DistanceSensor.hpp>
#include <webots/Robot.hpp>

std::vector<webots::DistanceSensor*> getDistanceSensors(webots::Robot* robot);