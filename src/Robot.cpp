#include "WPILib.h"
#include "DeadSwipe.h"

class Robot : public SampleRobot
{
	// class wide declarations

	// drive train declarations - anything prefixed with db is a part of the drive train

	// motor declarations - motors are controlled by motor controllers. We use Talons
	Talon *dbFrontLeft; // pwm 6
	Talon *dbRearLeft; // pwm 4
	Talon *dbFrontRight; // pwm 7
	Talon *dbRearRight; // pwm 9
	RobotDrive *dbDrive; // easy tools ftw
	Talon *dbMiddleLeft; // pwm 5
	Talon *dbMiddleRight; // pwm 8

	// encoder declarations - encoders require 2 digital I/O pins and are used to measured how far a rotating object
	// has moved
	Encoder *dbLeftEncoder; // DIO 0 and 1
	Encoder *dbRightEncoder; // DIO 2 and 3
	Encoder *dbMidEncoder; // DIO 4 and 5

	// gyro declaration - gyros allow us to measure how much an object has rotated along an axis
	// NOTE: gyros can(as of this writing) ONLY be used on AIN 0 and 1
	Gyro *dbGyro; // AIN 0

public:

	Robot()
{
		dbFrontLeft = new Talon(6);
		dbRearLeft = new Talon(4);
		dbFrontRight = new Talon(7);
		dbRearRight = new Talon(9);

		dbDrive = new RobotDrive(dbFrontLeft, dbRearLeft, dbFrontRight, dbRearRight);

		dbMiddleLeft = new Talon(5);
		dbMiddleRight = new Talon(8);

		dbLeftEncoder = new Encoder(0, 1, false, Encoder::k4X);
		dbRightEncoder = new Encoder(2, 3, false, Encoder::k4X);
		dbMidEncoder = new Encoder(4, 5, false, Encoder::k4X);

		dbGyro = new Gyro(0);
}
};
START_ROBOT_CLASS(Robot);
