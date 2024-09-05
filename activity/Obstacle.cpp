#include "Obstacle.h"

Obstacle::Obstacle(int le, int he)
{
    Length = le;
    height = he;
}

Obstacle::Obstacle(string nm, int le, int he) :Obstacle(le, he)
{
        name = nm;
}

int Obstacle::Overcome(int le, int he)
{
    return 0;
}

string Obstacle::Getname() const
{
    return name;
}

int Obstacle::GetLength() const
{
    return Length;
}

int Obstacle::Getheight() const
{
    return height;
}

int Obstacle::Howmany(int le, int he)
{
    return 0;
}

