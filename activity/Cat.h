#pragma once
#include "Member.h"
#include<iostream>
using namespace std;

class Cat :public Member
{
public:
	Cat(string nm, int ag);
	int torun(int ag);
	int catchup(int ag);

};

