#pragma once

#include<iostream>
using namespace std;
class Obstacle
{
	int Length;
	int height;
public:
	Obstacle(int le, int he);
	virtual int Overcome(int le, int he);
	virtual string Getnickname()const;

};

