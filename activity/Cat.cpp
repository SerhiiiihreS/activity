#include "Cat.h"



Cat::Cat(string nm, int ag):Member( nm, ag)
{
}

int  Cat::torun(int ag)
{
	int L=0;
	if (ag < 5) {
		L = 2000;
		return L;
	}
	else if(ag>=5) {
		L = 1000;
		return L;
	}
	
}

int Cat::catchup(int ag)
{
	int H=0;
	if (ag < 5) {
		H = 2;
		return H;
	}
	else if(ag>=5){
		H = 1;
		return H;
	}
}

