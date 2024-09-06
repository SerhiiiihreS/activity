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
	int finich = 0;
	if (bh == 1) {
		if (h > ns) {
			cout << "Participant" << "  " << nm << "  " << "passed the obstacle" << "__" <<  nz << "__" << "at the distance ->" << "  " << ns;
		}
		else if (h < ns) {
			cout << "Participant" << "  " << nm << " did not pass the obstacle" <<  "__" <<  nz << "__" << "at the distance" << "  " << ns;
			finich = 13; 
		}

	}
	else if (bh == 2) {
		if (l > ns) {
			cout << "Participant" << "  " << nm << "  " << "passed the obstacle" << "__" << nz << "__" << "at the distance ->" << "  " << ns; 
			
		}
		else if (l < ns) {
			cout << "Participant" << "  " << nm << " did not pass the obstacle" << "__" << nz << "__" << "at the distance" << "  " << ns;
			finich = 13; 
		}

	}
	return finich; 
}

int main(){

	Member* sub1 = new Cat("Tom", 3);
	Member* sub2 = new Man("Joun",25);
	Member* sub3 = new Robot("Wolli", 1);

	Obstacle* obj1 = new RunningTrack("Black", 1500, 0);
	Obstacle* obj2 = new Wall("White", 0, 4);
	Obstacle* obj3 = new RunningTrack("Black", 2500, 0);
	Obstacle* obj4 = new Wall("White", 0, 3);

	Member* grp[3] = { sub1,sub2,sub3 };
	Obstacle* ln[4] = { obj1,obj2,obj3,obj4 };



	int finich = 0;
	int sum1 = 0;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) { 
			Member* sub = grp[i];
			Obstacle* obj = ln[j];
			string Nsub = sub->GetName(); 
			string Nobj = obj->Getname(); 
			int Pag = sub->Getage(); 
			int Plg = obj->GetLength();
			int Pht = obj->Getheight();
			int Lsub = sub->torun(Pag);
			int Hsub = sub->catchup(Pag);
			int Bsub = obj->Overcome(Plg, Pht);
			int NSobj = obj->Howmany(Plg, Pht);
			finich=result(Nsub, Nobj, Lsub, Hsub, Bsub, NSobj);
			cout << endl; 
			if (finich == 13) {
				j = 4;
				cout << "Passed ->" << sum1 << endl; 
			}
			sum1 +=(Plg + Pht);
		}
		sum1 = 0;
		cout << "_________________________________________________________________";
		cout << endl;
	}

}