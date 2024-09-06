#pragma once
#include<iostream>
using namespace std;

class Member
{
	string  name;
	int age;
public:
	Member(int ag);
	Member(string nm, int ag);
	virtual int torun(int ag);
	virtual int catchup(int ag);
	virtual string GetName()const;
	virtual int Getage()const;
};

