#include "RunningTrack.h"


RunningTrack::RunningTrack(string nm, int le, int he):Obstacle( nm,  le,  he)
{
}

int RunningTrack::Overcome(int le,int he)
{
    int behv = 0;
    if (le < 0) {
        behv = 1;
        return behv;
    }
    else if (he < 0) {
        behv = 2;
        return behv;
    }
    
}


int RunningTrack::Howmany(int le, int he)
{
    int nss = 0;
    if (le > 0 && he<=0) {
        nss =le;
        cout << le;
        return le;
    }
    else if (he > 0 && le<=0) {
        nss =he;
        cout << he;
        return he;
        
    }
}

