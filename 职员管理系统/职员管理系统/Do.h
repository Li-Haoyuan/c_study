#pragma once
#include <iostream>
#include "staff_class.h"


#define FILENAME "empfile.txt"



class definition {
public:

	//登録されているスタッフの数
	int old_size;

	//スタッフ配列のポインタ
	BaseStaff** old_size_adr;

	//ファイルの存在するかどうかチェック
	bool FileIsEmpty;

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

	//ファイルの中に書き込み
	void save();

	//既存データ数を取得する
	int get_staffNum();

	//既存データの初期化
	void initStaff(int num);
};