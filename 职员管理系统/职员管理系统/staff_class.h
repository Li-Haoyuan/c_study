#pragma once
#include <iostream>
using namespace std;

class BaseStaff {

public:
	int StaffId;
	string Name;
	int Position;

	virtual void ShowInfo() = 0;
};

class NormalStaff :public BaseStaff {

public:

	NormalStaff(int id, string name, int pos);

	void ShowInfo();
};

class ManagerStaff :public BaseStaff {

public:
	ManagerStaff(int id, string name, int pos);

	void ShowInfo();
};

class BoseStaff :public BaseStaff {

public:
	BoseStaff(int id, string name, int pos);

	void ShowInfo();
};