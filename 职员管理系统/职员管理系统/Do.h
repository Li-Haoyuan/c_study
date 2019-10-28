#pragma once
#include <iostream>
#include "staff_class.h"


#define FILENAME "empfile.txt"



class definition {
public:

	//�o�^����Ă���X�^�b�t�̐�
	int old_size;

	//�X�^�b�t�z��̃|�C���^
	BaseStaff** old_size_adr;

	//�t�@�C���̑��݂��邩�ǂ����`�F�b�N
	bool FileIsEmpty;

	//�R���X�g���N�^
	definition();

	//�X�^�b�t�ǉ�����
	void StaffAdd();

	//�X�^�b�t�ꗗ
	void StaffList();

	//�X�^�b�t�ҏW����
	void StaffEdit();

	//�X�^�b�t�폜����
	void StaffDelete();

	//�X�^�b�t��������
	void StaffSearch();

	//�X�^�b�t�\�[�g����
	void DataSort();

	//�t�@�C���폜����
	void FileDelete();

	//���C�����j���[�\��
	void showMainMenu();

	//�t�@�C���̒��ɏ�������
	void save();

	//�����f�[�^�����擾����
	int get_staffNum();

	//�����f�[�^�̏�����
	void initStaff(int num);
};