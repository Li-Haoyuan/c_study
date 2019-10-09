#include <iostream>
using namespace std;
#include "class.h"

void showMainMenu();

void main(){

	while (true) {
		showMainMenu();
		int choose;
		cin >> choose;

		switch (choose) {
		case 1:
			StaffAdd();
			break;
		case 2:
			StaffList();
			break;
		case 3:
			StaffEdit();
			break;
		case 4:
			StaffDelete();
			break;
		case 5:
			StaffSearch();
			break;
		case 6:
			DataSort();
			break;
		case 7:
			FileDelete();
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


void showMainMenu() {

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