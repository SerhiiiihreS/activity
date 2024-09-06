#include<iostream>
#include "Member.h"
#include "Cat.h"
#include "Man.h"
#include "Wall.h"
#include "Robot.h"
#include "RunningTrack.h"
#include "Obstacle.h"

using namespace std;

int result(string nm,string nz ,int l,int h,int bh,int ns) {
	int sum = 0;
	int finich = 0;
	if (bh == 1) {
		if (h > ns) {
			cout << "Participant" << "  " << nm << "  " << "passed the obstacle" << "__" <<  nz << "__" << "at the distance ->" << "  " << ns;
			sum = +h;
		}
		else if (h < ns) {
			cout << "Participant" << "  " << nm << " did not pass the obstacle" <<  "__" <<  nz << "__" << "at the distance" << "  " << ns;
			finich = 13; 
		}

	}
	else if (bh == 2) {
		if (l > ns) {
			cout << "Participant" << "  " << nm << "  " << "passed the obstacle" << "__" << nz << "__" << "at the distance ->" << "  " << ns; 
			sum = +l;
			
		}
		else if (l < ns) {
			cout << "Participant" << "  " << nm << " did not pass the obstacle" << "__" << nz << "__" << "at the distance" << "  " << ns;
			finich = 13; 
		}

	}
	return sum;
}

int main(){

	Member* sub1 = new Cat("Tom", 3);
	Member* sub2 = new Man("Joun",25);
	Member* sub3 = new Robot("Wolli", 2);



	Obstacle* obj1 = new RunningTrack("Black", 11500, 0);


	string Nsub = sub1->GetName();
	string Nobj = obj1->Getname();
	int Pag = sub1->Getage();
	int Plg = obj1->GetLength();
	int Pht = obj1->Getheight();
	int Lsub = sub1->torun(Pag);
	int Hsub = sub1->catchup(Pag);
	int Bsub = obj1->Overcome(Plg, Pht);
	int NSobj = obj1->Howmany(Plg, Pht);
	result(Nsub, Nobj, Lsub, Hsub, Bsub, NSobj);



}