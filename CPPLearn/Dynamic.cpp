#include <iostream>
#include <string>
#include <Windows.h>
#include<stdlib.h>
#include<time.h>
using namespace std;

void Swap(int* a, int* b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
//오름차순 선택정렬
void SelectSort(int Array[], int size)
{
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = i + 1; j < size; j++)
		{
			if (Array[i] > Array[j])
				Swap(&Array[i], &Array[j]);
		}
	}
}

void Print(int Array[], int size)
{
	for (int i = 0; i < size; i++)
		cout << i + 1 << "번째 정수 : " << Array[i] << endl;
}

int main()
{
	srand(time(NULL)); // 난수생성
	int* ptr = NULL;

	int size;
	cout << "크기를 입력해주세요 : ";
	cin >> size;

	ptr = new int[size];

	for (int i = 0; i < size; i++)
	{
		ptr[i] = rand() % 100 + 1;
	}

	cout << "정렬 전" << endl;
	cout << "=============" << endl;
	Print(ptr, size);
	cout << "=============" << endl;

	cout << "정렬 후" << endl;
	cout << "=============" << endl;
	SelectSort(ptr, size);
	Print(ptr, size);
	cout << "=============" << endl;

	delete[] ptr;
	return 0;
}