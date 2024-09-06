#pragma once
#include "Member.h"
#include<iostream>
using namespace std;

class Man : public Member
{
public:
	Man(string nm, int ag);
	int torun(int ag);
	int catchup(int ag);
};

