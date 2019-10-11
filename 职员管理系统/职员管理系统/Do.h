#pragma once
#include <iostream>
#include "staff_class.h"

class definition {
public:

	//登録されているスタッフの数
	int old_size;

	//スタッフ配列のポインタ
	BaseStaff** old_size_adr;

	//コンストラクタ
	definition();

	//スタッフ追加処理
	void StaffAdd();

	//スタッフ一覧
	void StaffList();

	//スタッフ編集処理
	void StaffEdit();

	//スタッフ削除処理
	void StaffDelete();

	//スタッフ検索処理
	void StaffSearch();

	//スタッフソート処理
	void DataSort();

	//ファイル削除処理
	void FileDelete();

	//メインメニュー表示
	void showMainMenu();

};