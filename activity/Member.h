#pragma once
class Member
{
	int age;
public:
	Member(int ag);
	virtual int torun(int ag);
	virtual int catchup(int ag);
	virtual string Getnickname()const;
};

