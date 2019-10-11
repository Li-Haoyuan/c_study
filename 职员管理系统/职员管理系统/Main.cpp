#include <iostream>
using namespace std;
#include "staff_class.h"
#include "Do.h"

void main(){

	definition df;

	while (true) {
		df.showMainMenu();
		int choose;
		cin >> choose;

		switch (choose) {
		case 1:
			df.StaffAdd();
			break;
		case 2:
			df.StaffList();
			break;
		case 3:
			df.StaffEdit();
			break;
		case 4:
			df.StaffDelete();
			break;
		case 5:
			df.StaffSearch();
			break;
		case 6:
			df.DataSort();
			break;
		case 7:
			df.FileDelete();
			break;
		case 0:
			cout << "システムを終了します。" << endl;
			return;
		default:
			cout << "正しい数字を入力して下しさい。" << endl;
			system("pause");
			system("cls");
			break;
		}
	}
}


void definition::showMainMenu() {

cout << "********************" << endl;
cout << "*****1.職員追加*****" << endl;
cout << "*****2.職員一覧*****" << endl;
cout << "*****3.職員編集*****" << endl;
cout << "*****4.職員削除*****" << endl;
cout << "*****5.職員検索*****" << endl;
cout << "***6.データソート***" << endl;
cout << "***7.ファイル削除***" << endl;
cout << "***0.システム終了***" << endl;
cout << "********************" << endl;

}

definition::definition() {
	this->old_size = 0;
	this->old_size_adr = NULL;
}

void StaffAdd() {

	ofstream ofs;
	int new_size;

	cout << "スタッフデータを何件入力しますか？" << endl;
	cin >> new_size;

	if (new_size > 0) {

		int total_size = old_size + new_size;
		BaseStaff** Basecount = new BaseStaff * [total_size];

		if (old_size_adr != NULL) {
			for (int j = 0; j < old_size; j++) {
				Basecount[j] = old_size_adr[j];
			}
		}

		for (int i = 0; i < new_size; i++) {

			int id;
			string name;
			int Position;

			cout << i + 1 << "件目スタッフのスタッフIDを入力してください:" << endl;
			cin >> id;
			cout << i + 1 << "件目スタッフの名前を入力してください:" << endl;
			cin >> name;
			cout << i + 1 << "件目スタッフのポジション(１～３)を入力してください:" << endl;
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
				break;
			case 2:
				Base = new ManagerStaff(id, name, Position);
				break;
			case 3:
				Base = new BoseStaff(id, name, Position);
				break;
			}
			Basecount[old_size + i] = Base;

		}
		//元のデータを削除
		delete[] old_size_adr;
		//新データをセット
		old_size_adr = Basecount;
		//新しいサイズをセット
		old_size = total_size;
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
