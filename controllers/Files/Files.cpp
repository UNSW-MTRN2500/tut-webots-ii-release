#include <webots/Robot.hpp>
#include <webots/DistanceSensor.hpp>

#include "epuck.hpp"

int main() {
  webots::Robot robot;
  auto sensors{getDistanceSensors(&robot)};
  double timeStep{robot.getBasicTimeStep()};
  while (robot.step(timeStep) != -1) {
    for (auto const& sensor : sensors) {
      std::cout << sensor->getValue() << "\t\t";
    }
    std::cout << std::endl;
  }
}