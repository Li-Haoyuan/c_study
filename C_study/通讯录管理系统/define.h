#pragma once
#include <iostream>
using namespace std;
#define Max 1000

//联系人
struct contact {
	string name;
	int sex;
	int age;
	int phone_number;
	string address;
};

//联系册
struct contact_list {
	//联系人数组
	contact cArr[Max];
	//联系人个数
	int count = 0;
};

void add_contact(contact_list * list);
void show_contact(contact_list * list);
void delete_contact(contact_list* list);
void search_contact(contact_list* list);
void edit_contact(contact_list* list);
void delete_list(contact_list* list);