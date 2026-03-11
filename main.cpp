#include <iostream>

using namespace std;

//문자열 길이 세기
int StrLen(char* str, int ArrSize)
{
	for (int i = 0; i < ArrSize; ++i)
	{
		if (str[i] == '\0')
		{
			return i;
		}
		++i;
	}

}

//특정 문자를 바꾸기
void ChangeChar(char* str, char S, char C, int Strlen)
{
	cout << "현재 문자열 (" << str << ") 중 바꿀 문자와 무엇으로 바꿀지 입력하시오. (예시, H J) : ";
	cin >> S >> C;

	for (int i = 0; i < Strlen; ++i)
	{
		if (str[i] == S)
		{
			str[i] = C;
			break;
		}
		else if(str[i] == '\0')
		{
			cout << "선택한 문자는 없는 문자입니다." << endl;
			break;
		}
		i++;
	}
	cout << "현재 문자열 : " << str << endl;
}

//문자열 중 특정 문자 위치 찾기
int FindChar(char* str, char C, int Strlen)
{
	cout << "현재 문자열 (" << str << ") 중 찾고 싶은 문자를 입력하시오 : ";
	cin >> C;

	for (int i = 0; i < Strlen; ++i)
	{
		if (str[i] == C)
		{
			return i;
		}
		else if (str[i] == '\0')
		{
			return -1;
		}
		i++;
	}
}


int main()
{
	char Str[100] = { 'H', 'e', 'l', 'l', 'o', '\0'};
	char PrevWord{};
	char CurrentWord{};
	char FindWord{};

	cout << "문자열의 갯수 : " << StrLen(Str, sizeof(Str)) << endl;
	ChangeChar(Str, PrevWord, CurrentWord, StrLen(Str, sizeof(Str)));
	cout << "찾을 문자의 위치(-1이면 해당 문자는 없습니다.) : " << FindChar(Str, FindWord, StrLen(Str, sizeof(Str))) << "번째." << endl;
}