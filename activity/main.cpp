#include<iostream>
#include "Member.h"
#include "Cat.h"
#include "RunningTrack.h"

using namespace std;

int result(string nm,string nz ,int l,int h,int bh,int ns) {
	int sumL = 0;
	int sumH = 0;
	int finich = 0;
	if (bh == 1) {
		if (h > ns) {
			cout << "Participant" << "  " << nm << "  " << "passed the obstacle" << "__" <<  nz << "__" << "at the distance ->" << "  " << ns;
			sumL = +h;
			return sumL;
		}
		else if (h < ns) {
			cout << "Participant" << "  " << nm << " did not pass the obstacle" <<  "__" <<  ns << "__" << "at the distance" << "  " << ns;
			finich = 13; 
		}

	}
	else if (bh == 2) {
		if (l > ns) {
			cout << "Participant" << "  " << nm << "  " << "passed the obstacle" << "__" << nz << "__" << "at the distance ->" << "  " << ns; 
			sumH = +l;
			return sumH;
		}
		else if (l < ns) {
			cout << "Participant" << "  " << nm << " did not pass the obstacle" << "__" << ns << "__" << "at the distance" << "  " << ns;
			finich = 13; 
		}

	}

}

int main(){

	Member* sub1 = new Cat("Tom", 6);
	sub1->torun(6);

	sub1->catchup(6);


	Obstacle* obj1 = new RunningTrack("Black", 1500, 0);
	obj1->Overcome(1500, 0);


	string Nsub = sub1->GetName();
	string Nobj = obj1->Getname();
	int Lsub = sub1->torun(6);
	int Hsub = sub1->catchup(6);
	int Bsub = obj1->Overcome(1500, 0);
	int NSobj = obj1->Howmany(1500, 0);
	result(Nsub, Nobj, Lsub, Hsub, Bsub, NSobj);



}