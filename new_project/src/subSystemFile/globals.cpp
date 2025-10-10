#include "main.h"
#include "pros/misc.h"
#include "pros/motor_group.hpp"

// pros::Motor leftFront(1);
// pros::Motor leftBack(2);
// pros::Motor rightFront(3);
// pros::Motor rightBack(4);
//
// 6 motors
// pros::MotorGroup leftDrive({1, 2, 3});
// pros::MotorGroup rightDrive({4, 5, 6});
pros::MotorGroup leftDrive({7, 8});
pros::MotorGroup rightDrive({5, 6});
pros::Controller master(pros::E_CONTROLLER_MASTER);
