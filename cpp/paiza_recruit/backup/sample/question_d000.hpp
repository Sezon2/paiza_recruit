/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//           �ߋ��𓚃t�@�C�� - D000:�|���Z
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include "../../define.h"//#define�}�N����`�t�@�C��

//*************************************************************************************************************************************************************
//������̓��e
/**************************************************************************************************************************************************************
2�̐��̐���a, b�����s��؂�œ��͂����̂�a��b���|���Z�������l���o�͂��Ă��������B

�����͂����l

    ���͈͂ȉ��̃t�H�[�}�b�g�ŗ^�����܂��B

    a
    b

    ���͒l�ŏI�s�̖����ɉ��s���P����܂��B
    ������͕W�����͂���n����܂��B
***************************************************************************************************************************************************************/

//*************************************************************************************************************************************************************
//���𓚓��e
//*************************************************************************************************************************************************************
#ifdef ENABLE_PAIZA_LESSON_D000
//#include <stdio.h>
#include <iostream>
#include <string>

int main(void){
	// �����̓��ӂȌ����
	// �X�L���`�F�b�N�̊�{�ƂȂ�A�W�����͂Œl���擾���A
	// �o�͂���R�[�h�������Ă݂悤�I

//	std::string Result;//��������
	uint16_t    Input1;//���͂��ꂽ�l[1��]
	uint16_t    Input2;//���͂��ꂽ�l[2��]

	std::cin >> Input1;
	std::cin >> Input2;

	std::cout << (Input1 * Input2) << std::endl;

	return 0;
}
#endif // ENABLE_PAIZA_LESSON_D000
//*************************************************************************************************************************************************************

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////