/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//           解答ファイル
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include "define.h"//#defineマクロ定義ファイル

#ifndef ENABLE_PAIZA_RECRUIT_BACKUP

//#include <stdio.h>
#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>

int main(void){
	// 自分の得意な言語で
	// スキルチェックの基本となる、標準入力で値を取得し、
	// 出力するコードを書いてみよう！

	std::string Result;//処理結果
	std::string Input1;//入力された値[1個目]

	std::cin >> Input1;//ユーザー入力
	
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
