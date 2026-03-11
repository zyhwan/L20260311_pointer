#include <iostream>
#include "StringUtil.h"

using namespace std;

int main()
{
	char Str[100] = { 'H', 'e', 'l', 'l', 'o', '\0'};
	char PrevWord{};
	char CurrentWord{};
	char FindWord{};

	cout << "문자열의 갯수 : " << StrLen(Str, sizeof(Str)) << endl;
	ChangeChar(Str, PrevWord, CurrentWord, StrLen(Str, sizeof(Str)));
	cout << "찾을 문자의 위치(-1이면 해당 문자는 없습니다.) : " << FindChar(Str, FindWord, StrLen(Str, sizeof(Str))) << "번째." << endl;

	return 0;
}