#pragma once

#include<iostream>
using namespace std;
class Obstacle
{
	string name; 
	int Length;
	int height;
public:
	Obstacle(int le, int he);
	Obstacle(string nm, int le, int he);
	virtual int Overcome(int le, int he);
	virtual string Getname()const;
	virtual int Howmany(int le, int he);
};

