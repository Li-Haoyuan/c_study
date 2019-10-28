#include <iostream>
#include "staff_class.h"
using namespace std;

NormalStaff ::NormalStaff(int id, string name, int pos) {
	StaffId = id;
	Name = name;
	Position = pos;
}

void NormalStaff::ShowInfo(){
	cout << "�X�^�b�t�h�c:  "<< this->StaffId 
		 << "\t�X�^�b�t��:  "<< this->Name
		 << "\t�|�W�V����:  "<< this->Position
		 << "\t�E��:�C��������������  "<< endl;
}

ManagerStaff ::ManagerStaff(int id, string name, int pos) {
	StaffId = id;
	Name = name;
	Position = pos;
}

void ManagerStaff::ShowInfo() {
	cout << "�X�^�b�t�h�c:  " << this->StaffId
		<< "\t�X�^�b�t��:  " << this->Name
		<< "\t�|�W�V����:  " << this->Position
		<< "\t�E��:�C����z��  " << endl;
}

BoseStaff :: BoseStaff(int id, string name, int pos) {
	StaffId = id;
	Name = name;
	Position = pos;
}

void BoseStaff::ShowInfo() {
	cout << "�X�^�b�t�h�c:  " << this->StaffId
		<< "\t�X�^�b�t��:  " << this->Name
		<< "\t�|�W�V����:  " << this->Position
		<< "\t�E��:���ׂĂ̎������Ǘ�����  " << endl;
}

