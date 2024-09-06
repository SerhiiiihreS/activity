#include "Member.h"
#include<iostream>
using namespace std;

Member::Member(int ag)
{
	age = ag;
}
Member::Member(string nm, int ag) :Member(ag)
{
	name = nm;
}
int Member::torun(int ag)
{
	return 0;
}

int Member::catchup(int ag)
{
	return 0;
}

string Member::GetName() const
{
	return name;
}

int Member::Getage() const
{
	return age;
}


