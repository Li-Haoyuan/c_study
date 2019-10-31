#include <iostream>
#include <fstream>
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

definition::definition() {

	ifstream ifs;
	ifs.open(FILENAME, ios::in); //ファイルを読み込み

	//ファイルを開いたかどうかチェック
	//1.ファイルが存在しない場合
	if (!ifs.is_open()) {
		cout << "ファイルが存在しません。" << endl;

		this->old_size = 0;
		this->old_size_adr = NULL;

		this->FileIsEmpty = true;
		ifs.close();
		return;
	}

	//2.ファイルが空の場合
	char ch;
	ifs >> ch; //一文字を読み込み
	if (ifs.eof()) { //空の場合はtrue
		cout << "ファイルが空です" << endl;

		this->old_size = 0;
		this->old_size_adr = NULL;

		this->FileIsEmpty = true;
		ifs.close();
		return;
	}

	//3.ファイルが存在し、データがある場合
	int num = this->get_staffNum();
	cout << "スタッフデータが" << num << "件を存在します。" << endl;
	this->old_size = num;
	this->FileIsEmpty = false;
	this->initStaff(num);
	return;
}

void definition::showMainMenu() {

cout << "********************" << endl;
cout << "*****1.職員追加*****" << endl;
cout << "*****2.職員一覧*****" << endl;
cout << "*****3.職員編集*****" << endl;
cout << "*****4.職員削除*****" << endl;
cout << "*****5.職員検索*****" << endl;
cout << "***6.データソート***" << endl;
cout << "***7.全データ削除***" << endl;
cout << "***0.システム終了***" << endl;
cout << "********************" << endl;

}

void definition::StaffAdd() {

	ofstream ofs;
	int new_size;

	cout << "スタッフデータを何件入力しますか？" << endl;
	cin >> new_size;

	if (new_size > 0) {

		int total_size = this->old_size + new_size;
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
		//追加成功の場合は、フラグをfalseに変更
		FileIsEmpty = false;
		//追加したデータをファイルに書き込む
		this->save();
	}
}

void definition::StaffList() {
	if (this->FileIsEmpty == true) {
		cout << "ファイルが存在しないかデータが見つかりません。" << endl;
	}
	else {
		for (int i = 0; i < old_size; i++) {
			old_size_adr[i]->ShowInfo();
		}
	}
}

void definition::StaffEdit() {
	int no;
	int flag = 0;
	if (this->FileIsEmpty == true) {
		cout << "ファイルが存在しないかデータが見つかりません。" << endl;
	}
	else {
		cout << "編集したいスタッフＩＤを入力してください" << endl;
		cin >> no;
		while (cin.fail())
		{
			cin.clear();
			cin.ignore();
			cout << "数字を入力してください。" << endl;
			cin >> no;
		}

		for (int i = 0; i < old_size; i++) {
			if (old_size_adr[i]->StaffId == no) {
				int new_id;
				string new_name;
				int new_position;

				cout << "新しいスタッフＩＤを入力してください。" << endl;
				cin >> new_id;

				while (cin.fail())
				{
					cin.clear();
					cin.ignore();
					cout << "数字を入力してください。" << endl;
					cin >> no;
				}

				cout << "新しいスタッフ名前を入力してください。" << endl;
				cin >> new_name;

				cout << "新しいポジションを入力してください。" << endl;
				cin >> new_position;

				while (cin.fail())
				{
					cin.clear();
					cin.ignore();
					cout << "1～３の数字を入力してください。" << endl;
					cin >> new_position;
				}

				switch (new_position) {
				case 1:
					old_size_adr[i] = new NormalStaff(new_id, new_name, new_position);
					break;
				case 2:
					old_size_adr[i] = new ManagerStaff(new_id, new_name, new_position);
					break;
				case 3:
					old_size_adr[i] = new BoseStaff(new_id, new_name, new_position);
					break;
				}
				cout << "更新ができました。" << endl;

				this->save();
				flag = 1;
			}
		}
		if (flag == 0) {
			cout << "該当データが見つかりませんでした。" << endl;
		}
	}
}

void definition::StaffDelete() {
	int no;
	int flag = 0;

	if (this->FileIsEmpty == true) {
		cout << "ファイルが存在しないかデータが見つかりません。" << endl;
	}
	else {
		cout << "削除したいスタッフＩＤを入力してください" << endl;
		cin >> no;
		while (cin.fail())
		{
			cin.clear();
			cin.ignore();
			cout << "数字を入力してください。" << endl;
			cin >> no;
		}

		for (int i = 0; i < old_size; i++) {
			if (old_size_adr[i]->StaffId == no) {
				for (i; i < old_size - 1; i++) {
					old_size_adr[i] = old_size_adr[i + 1];
				}

				old_size -= 1;
				cout << "削除しました。" << endl;
				this->save();
				flag = 1;
			}
		}
		if (flag == 0) {
			cout << "該当データが見つかりませんでした。" << endl;
		}
	}
	
}

void definition::StaffSearch() {
	int no;
	int flag = 0;

	if (this->FileIsEmpty == true) {
		cout << "ファイルが存在しないかデータが見つかりません。" << endl;
	}
	else {
		cout << "検索したいスタッフＩＤを入力してください" << endl;
		cin >> no;
		while (cin.fail())
		{
			cin.clear();
			cin.ignore();
			cout << "数字を入力してください。" << endl;
			cin >> no;
		}

		for (int i = 0; i < old_size; i++) {
			if (old_size_adr[i]->StaffId == no) {
				old_size_adr[i]->ShowInfo();
				flag = 1;
			}
		}
		if (flag == 0) {
			cout << "該当データが見つかりませんでした。" << endl;
		}
	}
}

void definition::DataSort() {
	if (this->FileIsEmpty == true) {
		cout << "ファイルが存在しないかデータが見つかりません。" << endl;
	}
	else {
		cout << "１.降順" << endl;
		cout << "２.昇順" << endl;

		int selected;
		cin >> selected;

		if (selected == 1) {

		}
		else {

		}
	}
}	

void definition::FileDelete() {
	if (this->FileIsEmpty == true) {
		cout << "ファイルが存在しないかデータが見つかりません。" << endl;
	}
	else {
		cout << "すべてのデータが削除されます、よろしいですか？" << endl;
		cout << "1.はい" << endl;
		cout << "2.いいえ" << endl;

		int select;
		cin >> select;
		if (select == 1) {
			ofstream ofs;
			ofs.open(FILENAME,ios::trunc);
			//ヒープ領域のデータを削除
			for (int i = 0; i < this->old_size; i++) {
				delete this->old_size_adr[i];
				this->old_size_adr[i] = NULL;
			}
			delete[] this->old_size_adr;
			this->old_size_adr = NULL;
			this->FileIsEmpty = true;
			this->old_size = 0;

			cout << "削除できました。" << endl;
		}
		else {
			return;
		}
		
	}
}

void definition::save(){
	ofstream ofs;
	ofs.open(FILENAME, ios::out);

	for (int i = 0; i < this->old_size;i++) {
		ofs << this->old_size_adr[i]->StaffId << " "
			<< this->old_size_adr[i]->Name << " "
			<< this->old_size_adr[i]->Position << endl;
	}

	ofs.close();
}

int definition::get_staffNum() {

	ifstream ifs;
	ifs.open(FILENAME, ios::in); 

	int id;
	string name;
	int pos;

	//数
	int num = 0;

	//参考　＝＞　http://nucl.hatenablog.com/entry/2015/03/12/005246
	while (ifs >> id && ifs >> name && ifs >> pos) {
		//一行の読み込みを終わったら、集計する
		num++;
	}
	ifs.close();

	return num;
}

void definition::initStaff(int num) {
	ifstream ifs;
	ifs.open(FILENAME, ios::in);

	int id;
	string name;
	int pos;

	BaseStaff** Basecount = new BaseStaff * [num];
	for (int i = 0; i < num; i++) {
		ifs >> id;
		ifs >> name;
		ifs >> pos;
		BaseStaff* base = NULL;
		if (pos == 1) {
			base = new NormalStaff(id, name, pos);
		}
		else if (pos == 2) {
			base = new ManagerStaff(id, name, pos);
		}
		else if (pos == 3) {
			base = new BoseStaff(id, name, pos);
		}

		Basecount[i] = base;
	}

	this->old_size_adr = Basecount;
	ifs.close();
}