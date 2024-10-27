#include <iostream>

#include <webots/Robot.hpp>

int main() {
  webots::Robot robot;
  double timeStep{robot.getBasicTimeStep()};
  while (robot.step(timeStep) != -1) {
  }
}