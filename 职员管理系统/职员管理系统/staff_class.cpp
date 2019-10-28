#include <iostream>
#include "staff_class.h"
using namespace std;

NormalStaff ::NormalStaff(int id, string name, int pos) {
	StaffId = id;
	Name = name;
	Position = pos;
}

void NormalStaff::ShowInfo(){
	cout << "スタッフＩＤ:  "<< this->StaffId 
		 << "\tスタッフ名:  "<< this->Name
		 << "\tポジション:  "<< this->Position
		 << "\t職務:任務を完成させる  "<< endl;
}

ManagerStaff ::ManagerStaff(int id, string name, int pos) {
	StaffId = id;
	Name = name;
	Position = pos;
}

void ManagerStaff::ShowInfo() {
	cout << "スタッフＩＤ:  " << this->StaffId
		<< "\tスタッフ名:  " << this->Name
		<< "\tポジション:  " << this->Position
		<< "\t職務:任務を配る  " << endl;
}

BoseStaff :: BoseStaff(int id, string name, int pos) {
	StaffId = id;
	Name = name;
	Position = pos;
}

void BoseStaff::ShowInfo() {
	cout << "スタッフＩＤ:  " << this->StaffId
		<< "\tスタッフ名:  " << this->Name
		<< "\tポジション:  " << this->Position
		<< "\t職務:すべての事務を管理する  " << endl;
}

