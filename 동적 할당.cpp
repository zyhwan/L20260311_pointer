#include <iostream>

using namespace std;

int main()
{
	int Size = 0;

	cout << "크기를 입력하시오 : ";
	cin >> Size;

	int* p = new int[Size];

	for (int i = 0; i < Size; ++i)
	{
		p[i] = i + 1;
		cout << p[i] << " ";
	}

	delete[] p;

}