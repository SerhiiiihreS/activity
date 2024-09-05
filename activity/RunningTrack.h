#pragma once
#include "Obstacle.h"
#include<iostream>
using namespace std; 

class RunningTrack :public Obstacle
{
public:
	RunningTrack(string nm, int le, int he);
	int Overcome(int le,int he);
    int Howmany(int le, int he);
};

