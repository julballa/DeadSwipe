#ifndef _F310_H_
#define _F310_H_

#include "WPILib.h"
#include "Joystick.h"

/**
 * Class to facilitate input handling from a Logitech F310
 */
class F310 : public Joystick
{
public:
	typedef enum
	{
		kLeftStick,
		kRightStick,
	} StickType;

	typedef enum
	{
		kLeftXAxis,
		kLeftYAxis,
		kRightXAxis,
		kRightYAxis,
	} AxisType;

	typedef enum
	{
		kXButton,
		kAButton,
		kBButton,
		kYButton,
		kLeftBumper,
		kRightBumper,
		kLeftTrigger,
		kRightTrigger,
		kBackButton,
		kStartButton,
		kLeftStickButton,
		kRightStickButton,
	} ButtonType;

	F310(int port);
	~F310();

	float GetX(StickType stick);
	float GetY(StickType stick);
	float GetAxis(AxisType axis);
	float GetDPadX(void);
	float GetDPadY(void);

	bool GetButton(ButtonType button);

private:
    static const int kLeftXAxisNum = 1;
    static const int kLeftYAxisNum = 2;
    static const int kRightXAxisNum = 3;
    static const int kRightYAxisNum = 4;
    static const int kDPadXAxisNum = 5;
    static const int kDPadYAxisNum = 6;

    static const int kXButtonNum = 1;
    static const int kAButtonNum = 2;
    static const int kBButtonNum = 3;
    static const int kYButtonNum = 4;
    static const int kLeftBumperNum = 5;
    static const int kRightBumperNum = 6;
    static const int kLeftTriggerNum = 7;
    static const int kRightTriggerNum = 8;
    static const int kBackButtonNum = 9;
    static const int kStartButtonNum = 10;
    static const int kLeftStickButtonNum = 11;
    static const int kRightStickButtonNum = 12;
};

#endif // _F310_H_

