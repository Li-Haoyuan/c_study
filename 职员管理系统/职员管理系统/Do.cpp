#include <iostream>
#include "class.h"
#include <fstream>
using namespace std;



void StaffAdd(int count) {

	ofstream ofs;
	int new_count;

	int id;
	string name;
	int Position;

	cout << "�X�^�b�t�f�[�^���������͂��܂����H" << endl;
	cin >> new_count;

	count = count + new_count;
	BaseStaff **Basecount = new BaseStaff*[count];

	if (Old_size != NULL) {
		
	}

	
	
	
	for(int i = 1; i <= new_count; i++) {
		cout << i << "���ڃX�^�b�t�̃X�^�b�tID����͂��Ă�������:" << endl;
		cin >> id;
		cout << i << "���ڃX�^�b�t�̖��O����͂��Ă�������:" << endl;
		cin >> name;
		cout << i << "���ڃX�^�b�t�̃|�W�V����(�P�`�R)����͂��Ă�������:" << endl;
		cin >> Position;

		while (cin.fail())
		{
			cin.clear();
			cin.ignore();
			cout << "1����3�܂ł̐�������͂��Ă��������B" << endl;
			cin >> Position;
		}

		BaseStaff* Base = NULL;

		switch (Position) {
		case 1:
			Base = new NormalStaff(id, name, Position);
			Basecount[i] = Base;
			break;
		case 2:
			Base = new ManagerStaff(id, name, Position);
			Basecount[i] = Base;
			break;
		case 3:
			Base = new BoseStaff(id, name, Position);
			Basecount[i] = Base;
			break;
		}
	}

}
void StaffList() {

}
void StaffEdit() {

}
void StaffDelete() {

}
void StaffSearch() {

}
void DataSort() {

}
void FileDelete() {

}