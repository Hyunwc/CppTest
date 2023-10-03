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
//�������� ��������
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
		cout << i + 1 << "��° ���� : " << Array[i] << endl;
}

int main()
{
	srand(time(NULL)); // ��������
	int* ptr = NULL;

	int size;
	cout << "ũ�⸦ �Է����ּ��� : ";
	cin >> size;

	ptr = new int[size];

	for (int i = 0; i < size; i++)
	{
		ptr[i] = rand() % 100 + 1;
	}

	cout << "���� ��" << endl;
	cout << "=============" << endl;
	Print(ptr, size);
	cout << "=============" << endl;

	cout << "���� ��" << endl;
	cout << "=============" << endl;
	SelectSort(ptr, size);
	Print(ptr, size);
	cout << "=============" << endl;

	delete[] ptr;
	return 0;
}