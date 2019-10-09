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

	cout << "スタッフデータを何件入力しますか？" << endl;
	cin >> new_count;

	count = count + new_count;
	BaseStaff **Basecount = new BaseStaff*[count];

	if (Old_size != NULL) {
		
	}

	
	
	
	for(int i = 1; i <= new_count; i++) {
		cout << i << "件目スタッフのスタッフIDを入力してください:" << endl;
		cin >> id;
		cout << i << "件目スタッフの名前を入力してください:" << endl;
		cin >> name;
		cout << i << "件目スタッフのポジション(１～３)を入力してください:" << endl;
		cin >> Position;

		while (cin.fail())
		{
			cin.clear();
			cin.ignore();
			cout << "1から3までの数字を入力してください。" << endl;
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