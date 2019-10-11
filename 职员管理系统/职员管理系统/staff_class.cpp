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