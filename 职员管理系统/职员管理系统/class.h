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

	string Duties = "�C��������������";
};

class ManagerStaff :public BaseStaff {

public:
	ManagerStaff(int id, string name, int pos) {
		StaffId = id;
		Name = name;
		Position = pos;
	}

	string Duties = "�C����z��";
};

class BoseStaff :public BaseStaff {

public:
	BoseStaff(int id, string name, int pos) {
		StaffId = id;
		Name = name;
		Position = pos;
	}

	string Duties = "���ׂĂ̎������Ǘ�����";
};

void StaffAdd();
void StaffList();
void StaffEdit();
void StaffDelete();
void StaffSearch();
void DataSort();
void FileDelete();
