#pragma once
#include "Member.h"
#include<iostream>
using namespace std;

class Cat :public Member
{
	string  nickname;
public:
	Cat(string nn, int ag);
	int torun(int ag);
	int catchup(int ag);
	string Getnickname()const;

};

