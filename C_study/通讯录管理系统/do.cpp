#include <iostream>
#include "define.h"
using namespace std;


void add_contact(contact_list* list)
{
	if (list->count == Max) {
		cout << "加不进去了！" << endl;
	}
	else {
		int select_sex = 0;

		cout << "请输入名字" << endl;
		cin >> list->cArr[list->count].name ;

		while (true){
			cout << "请选择性别\n1->男\n2->女" << endl;
			cin >> select_sex;
			if (select_sex == 1 || select_sex == 2) {
				list->cArr[list->count].sex = select_sex;
				break;
			}
		}
	
		cout << "请输入年龄" << endl;
		cin >> list->cArr[list->count].age;

		cout << "请输入手机号" << endl;
		cin >> list->cArr[list->count].phone_number;

		cout << "请输入住址" << endl;
		cin >> list->cArr[list->count].address;

		cout << "添加成功" << endl;
		list->count++;

		system("pause");
		system("cls");
	}
	
}

void show_contact(contact_list* list) {
	for (int i = 0; i < list->count; i++) {
		cout << "姓名:"<< list->cArr[i].name <<"\t性别:"<< list->cArr[i].sex <<"\t年龄:"<< list->cArr[i].age <<"\t电话:"<< list->cArr[i].phone_number <<"\t住址:"<< list->cArr[i].address << endl;
	}
	system("pause");
	system("cls");
}

void delete_contact(contact_list* list) {
	string delete_name;

	cout << "输入姓名" << endl;
	cin >> delete_name;
	for (int i = 0; i < list->count; i++) {
		if (list->cArr[i].name == delete_name) {
			for (int j = i; j < list->count;j++) {
				list->cArr[j] = list->cArr[j + 1];
			}
			list->count--;
			cout << "删除成功" << endl;
			system("pause");
			system("cls");
			return;
		}
	}
	cout << "没找到！" << endl;
}

void search_contact(contact_list* list) {
	string search_name;

	cout << "输入姓名" << endl;
	cin >> search_name;
	for (int i = 0; i < list->count; i++) {
		if (list->cArr[i].name == search_name) {
			cout << "姓名:" << list->cArr[i].name << "\t性别:" << list->cArr[i].sex << "\t年龄:" << list->cArr[i].age << "\t电话:" << list->cArr[i].phone_number << "\t住址:" << list->cArr[i].address << endl;
			system("pause");
			system("cls");
			return;
		}
	}
	cout << "没找到！" << endl;
}

void edit_contact(contact_list* list) {

	int select_sex = 0;
	string edit_name;

	cout << "输入姓名" << endl;
	cin >> edit_name;

	for (int i = 0; i < list->count; i++) {
		if (list->cArr[i].name == edit_name) {
			cout << "请输入名字" << endl;
			cin >> list->cArr[i].name;

			while (true) {
				cout << "请选择性别\n1->男\n2->女" << endl;
				cin >> select_sex;
				if (select_sex == 1 || select_sex == 2) {
					list->cArr[i].sex = select_sex;
					break;
				}
			}

			cout << "请输入年龄" << endl;
			cin >> list->cArr[i].age;

			cout << "请输入手机号" << endl;
			cin >> list->cArr[i].phone_number;

			cout << "请输入住址" << endl;
			cin >> list->cArr[i].address;

			cout << "更新成功" << endl;

			system("pause");
			system("cls");
			return;
		}
	}

	
}

void delete_list(contact_list* list) {
	list->count = 0;
	cout << "清除成功" << endl;
	system("pause");
	system("cls");
}