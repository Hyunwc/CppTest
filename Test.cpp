#include <iostream>
using namespace std;

int Swap(int* a, int* b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;

	return tmp;
}

int main()
{
	int a = 10, b = 20;

	cout << "변경 전 a = " << a << ", b = " << b << endl;
	Swap(&a, &b);
	cout << "변경 후 a = " << a << ", b = " << b << endl;

	return 0;
}