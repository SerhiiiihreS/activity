#include "Man.h"

Man::Man(string nm, int ag) :Member(nm, ag)
{
}

int  Man::torun(int ag)
{
	int L = 0;
	if (ag < 10) {
		L = 1000;
		return L;
	}
	else if (ag >= 10 && ag<17) {
		L = 2000;
		return L;
	}
	else if (ag >= 17 && ag<35) {
		L = 5000;
		return L;
	}
	else if (ag >= 35 ) {
		L = 2000;
		return L;
	}

}

int Man::catchup(int ag)
{
	int H = 0;
	if (ag < 10) {
		H = 1;
		return H;
	}
	else if (ag >= 10) {
		H = 3;
		return H;
	}
}