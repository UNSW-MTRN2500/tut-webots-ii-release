#include "constants.hpp"
#include "epuck.hpp"

std::vector<webots::DistanceSensor*> getDistanceSensors(webots::Robot* robot) {
  double timeStep{robot->getBasicTimeStep()};
  std::vector<webots::DistanceSensor*> distanceSensors;
  for (auto const& name : distanceSensorNames) {
    auto distanceSensor{robot->getDistanceSensor(name)};
    distanceSensor->enable(timeStep);
    distanceSensors.push_back(distanceSensor);
  }
  return distanceSensors;
}