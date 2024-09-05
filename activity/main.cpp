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
			cout << "Participant" << "  " << nm << "  " << "passed the obstacle" << "  " << nz << "at the distance ->" << "  " << ns;
		}
		else if (h < ns) {
			cout << "Participant" << "  " << nm << " did not pass the obstacle" << "  " << ns << "at the distance" << "  " << ns;
			finich = 13;
		}

	}

}

int main(){

	Member* sub1 = new Cat("Tom", 4);
	sub1->torun(4);
	sub1->catchup(4);


	Obstacle* obj1 = new RunningTrack("black", 500, 0);
	obj1->Overcome(500, 0);


	string Nsub = sub1->Getnickname();
	string Nobj=obj1->


}