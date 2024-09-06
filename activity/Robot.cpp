#include "Robot.h"

Robot::Robot(string nm, int ag):Member(nm, ag)
{
}

int  Robot::torun(int ag)
{
	int L = 0;
	if (ag < 2) {
		L = 2000;
		return L;
	}
	else if (ag >= 2) {
		L = 1000;
		return L;
	}

}

int Robot::catchup(int ag)
{
	int H = 0;
	if (ag < 2) {
		H = 3;
		return H;
	}
	else if (ag >= 2) {
		H = 2;
		return H;
	}
}