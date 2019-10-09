#pragma once
#include <iostream>
using namespace std;


int count = 0;
BaseStaff* Old_size = NULL;

class BaseStaff {

public:

	int StaffId;
	string Name;
	int Position;
	
};

class NormalStaff:public BaseStaff {

public:
	NormalStaff(int id,string name,int pos) {
		StaffId = id;
		Name = name;
		Position = pos;
	}

	string Duties = "”C–±‚ğŠ®¬‚³‚¹‚é";
};

class ManagerStaff :public BaseStaff {

public:
	ManagerStaff(int id, string name, int pos) {
		StaffId = id;
		Name = name;
		Position = pos;
	}

	string Duties = "”C–±‚ğ”z‚é";
};

class BoseStaff :public BaseStaff {

public:
	BoseStaff(int id, string name, int pos) {
		StaffId = id;
		Name = name;
		Position = pos;
	}

	string Duties = "‚·‚×‚Ä‚Ì––±‚ğŠÇ—‚·‚é";
};

void StaffAdd();
void StaffList();
void StaffEdit();
void StaffDelete();
void StaffSearch();
void DataSort();
void FileDelete();
