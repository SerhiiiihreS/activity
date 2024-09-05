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
			cout << "Participant" << "  " << nm << " did not pass the obstacle" <<  "__" <<  nz << "__" << "at the distance" << "  " << ns;
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
			cout << "Participant" << "  " << nm << " did not pass the obstacle" << "__" << nz << "__" << "at the distance" << "  " << ns;
			finich = 13; 
		}

	}

}

int main(){

	Member* sub1 = new Cat("Tom", 3);



	Obstacle* obj1 = new RunningTrack("Black", 1500, 0);


	string Nsub = sub1->GetName();
	string Nobj = obj1->Getname();
	int Pag = sub1->Getage();
	int Plg = obj1->GetLength();
	int Pht = obj1->Getheight();
	cout << Pag << "," << Plg << "," << Pht;
	int Lsub = sub1->torun(Pag);
	cout << endl;
	cout << Lsub;
	int Hsub = sub1->catchup(Pag);
	cout << endl;
	cout << Hsub;
	int Bsub = obj1->Overcome(Plg, Pht);
	cout << endl << Bsub;
	int NSobj = obj1->Howmany(Plg, Pht);
	cout << endl;
	cout << NSobj;
	cout << endl;
	result(Nsub, Nobj, Lsub, Hsub, Bsub, NSobj);



}