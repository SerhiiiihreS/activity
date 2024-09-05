#include "RunningTrack.h"

RunningTrack::RunningTrack(string nm, int le, int he):Obstacle( le, he)
{
    name = nm;
}

int RunningTrack::Overcome(int le, int he)
{
    int behv = 0;
    int nss = 0;
    if (le == 0) {
        behv = 1;
        nss = he;
    }
    else if (he == 0) {
        behv = 2;
        nss = le;
    }
    return nss;
    return behv;
}
