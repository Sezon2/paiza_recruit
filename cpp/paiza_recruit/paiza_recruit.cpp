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

	std::string Result;//��������
	std::string Input1;//���͂��ꂽ�l[1��]

	std::cin >> Input1;//���[�U�[����
	
	for ( size_t i = 0 ; i < Input1.size() ; i++ ) {
		if ( Input1[i] == 'A' ) { Result += "4";       }else
		if ( Input1[i] == 'E' ) { Result += "3";       }else
		if ( Input1[i] == 'G' ) { Result += "6";       }else
		if ( Input1[i] == 'I' ) { Result += "1";       }else
		if ( Input1[i] == 'O' ) { Result += "0";       }else
		if ( Input1[i] == 'S' ) { Result += "5";       }else
		if ( Input1[i] == 'Z' ) { Result += "2";       }else
		                        { Result += Input1[i]; }
	}

	std::cout << Result << std::endl;

	return 0;
}

#endif // !ENABLE_PAIZA_RECRUIT_BACKUP
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
