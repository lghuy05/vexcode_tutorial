#include "../../include/subSystemHeaders/drive.hpp"
#include "../../include/subSystemHeaders/globals.hpp"
#include "main.h"

void goForward() {
  leftDrive.move(50);
  rightDrive.move(50);
  pros::delay(1000);
  leftDrive.move(0);
  rightDrive.move(0);
  pros::delay(1000);
};
void goLeft() {
  leftDrive.move(50);
  rightDrive.move(-50);
  pros::delay(1000);
  leftDrive.move(0);
  rightDrive.move(0);
  pros::delay(1000);
}

void goSquare() {
  goForward();
  goLeft();
  goForward();
  goLeft();
  goForward();
};
