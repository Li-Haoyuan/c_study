#include <iostream>
#include "define.h"

using namespace std;
void showMainMenu();


int main(void) {

	int choose;
	contact_list list;

	do{
		showMainMenu();
		cin >> choose;

		switch (choose)
		{
		case 1:
			add_contact(&list);
			break;
		case 2:
			show_contact(&list);
			break;
		case 3:
			delete_contact(&list);
			break;
		case 4:
			search_contact(&list);
			break;
		case 5:
			edit_contact(&list);
			break;
		case 6:
			delete_list(&list);
			break;
		case 0:
			cout << "欢迎再次使用" << endl;
			//system("pause");
			return 0;
			//system("exit");
		default:
			cout << "fuckyou" << endl;
			break;
		}
	}while(choose != 0);
}

void showMainMenu() {
	
	cout << "******************" << endl;
	cout << "***1.添加联系人***" << endl;
	cout << "***2.显示联系人***" << endl;
	cout << "***3.删除联系人***" << endl;
	cout << "***4.查找联系人***" << endl;
	cout << "***5.修改联系人***" << endl;
	cout << "***6.清空联系人***" << endl;
	cout << "***0.退出通讯录***" << endl;
	cout << "******************" << endl;

}