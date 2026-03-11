#include <iostream>

using namespace std;

int main()
{
	int Size = 0;

	cout << "크기를 입력하시오 : ";
	cin >> Size;

	int* p = new int[Size];

	if (!p)
	{
		return -1;
	}


	for (int i = 0; i < Size; ++i)
	{
		p[i] = i + 1;
		cout << p[i] << " ";
	}

	//Heap에 있는 배열을 반환.
	delete[] p;
	p = nullptr; //이 포인터가 가리키는 곳이 없다는 의미.

}