/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//           過去解答ファイル - D007:N倍の文字列
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include "../../define.h"//#defineマクロ定義ファイル

//*************************************************************************************************************************************************************
//★質問の内容
/**************************************************************************************************************************************************************
 正の整数 N が標準入力から入力されるので、N 個の「*」を繋げた文字列を出力するプログラムを作成しましょう。

例えば N = 3の場合

    *** 

のように出力してください。
***************************************************************************************************************************************************************/

//*************************************************************************************************************************************************************
//★解答内容
//*************************************************************************************************************************************************************
#ifdef ENABLE_PAIZA_RECRUIT_D007
//#include <stdio.h>
#include <iostream>
#include <string>

int main(void){
	// 自分の得意な言語で
	// スキルチェックの基本となる、標準入力で値を取得し、
	// 出力するコードを書いてみよう！

	std::string Result;//処理結果
	size_t      Input; //入力された値

	std::cin >> Input;

	for ( size_t i = 0 ; i < Input ; i++ ) {
		if ( i >= 100 ) { break; }
		Result += "*";
	}

	std::cout << Result << std::endl;

	return 0;
}
#endif // ENABLE_PAIZA_RECRUIT_D007
//*************************************************************************************************************************************************************

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
