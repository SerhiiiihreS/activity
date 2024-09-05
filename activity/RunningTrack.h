#pragma once
#include "Obstacle.h"
#include<iostream>
using namespace std; 

class RunningTrack :public Obstacle
{
	string name;
public:
	RunningTrack(string nm, int le, int he);
	int Overcome(int le, int he);
};

