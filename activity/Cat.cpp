#include "Cat.h"

Cat::Cat(string nn, int ag):Member(ag)
{
	nickname = nn;
}

int  Cat::torun(int ag)
{
	int L;
	if (ag < 5) {
		L = 2000;
	}
	else {
		L = 1000;
	}
	return L;
}

int Cat::catchup(int ag)
{
	int H;
	if (ag < 5) {
		H = 2;
	}
	else {
		H = 1;
	}
	return H;
}

string Cat::Getnickname()const
{
	return nickname;
}
