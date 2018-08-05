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

int main(void){
	// 自分の得意な言語で
	// スキルチェックの基本となる、標準入力で値を取得し、
	// 出力するコードを書いてみよう！

	uint8_t           Result = 0;	//処理結果
	std::string       Input1;		//入力された値[1個目]
	std::stringstream InputStream1;	//入力された値の文字列ストリーム[1個目]
	std::string       InputParts1;	//入力された値の一部[1個目]※区切り文字で取得した物。

	std::getline(std::cin,Input1);//ユーザー入力
	InputStream1 << Input1;//入力された内容を文字列ストリームへ追加。

	std::getline(InputStream1,InputParts1,' '); Result += static_cast<uint8_t>( atoi(InputParts1.c_str()) );
	std::getline(InputStream1,InputParts1,' '); Result += static_cast<uint8_t>( atoi(InputParts1.c_str()) );

	std::cout << (uint16_t)Result << std::endl;

	return 0;
}

#endif // !ENABLE_PAIZA_RECRUIT_BACKUP
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
