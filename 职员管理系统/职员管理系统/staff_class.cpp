#include <iostream>
#include "staff_class.h"
using namespace std;

class NormalStaff :public BaseStaff {

public:
	NormalStaff(int id, string name, int pos) {
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