/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//           �𓚃t�@�C��
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include "define.h"//#define�}�N����`�t�@�C��

#ifndef ENABLE_PAIZA_RECRUIT_BACKUP

//#include <stdio.h>
#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>

int main(void){
	// �����̓��ӂȌ����
	// �X�L���`�F�b�N�̊�{�ƂȂ�A�W�����͂Œl���擾���A
	// �o�͂���R�[�h�������Ă݂悤�I

	std::vector<uint16_t> Result;//��������
	uint16_t              Input1;//���͂��ꂽ�l[1��]
	uint16_t              Input2;//���͂��ꂽ�l[2��]

	std::cin >> Input1;//���[�U�[����

	for ( size_t i = 0 ; i < Input1 ; i++ ) {
		std::cin >> Input2;//���[�U�[����
		Result.push_back(Input2);
	}

	std::sort(Result.begin(),Result.end());//�����ɕ��ёւ���B

	for ( size_t i = 0 ; i < Result.size() ; i++ ) {
		std::cout << Result[i] << std::endl;
	}

	return 0;
}

#endif // !ENABLE_PAIZA_RECRUIT_BACKUP
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
