#pragma once
#include "Member.h"
#include<iostream>
using namespace std;


class Robot :public Member
{
public:
	Robot(string nm, int ag);
	int torun(int ag);
	int catchup(int ag);
};

