/*
 * UsefulMath.cpp
 *
 *  Created on: Oct 20, 2015
 *      Author: Robotics
 */

#include "UsefulMath.h"
#include "DeadSwipe.h"

float sigmoid()
{
}

// our DPP fix for the elevator
// where x is the number of revolutions
// and the function returns the distance per pulse
// C = 2pi(r+xt) where r is the radius, x is the # of revolutions and t is
// the thickness of the belt
// DPP = C/ GR * PPR where C circumference, GR is the gear ratio, and PPR is
// the pulses per revolution

float EncoderMagic(float x)
{
	float C = (2 *PI) * (RADIUS + (x * THICKNESS));


	return C / ELEVATOR_GEAR_RATIO * OPTICAL_PPR;
}





