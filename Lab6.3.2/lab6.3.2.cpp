#include <iostream>
#include <time.h>
#include <iomanip>

using namespace std;


void Create(int a[], const int n, int i) {
	a[i] = -50 + rand() * 101/ RAND_MAX;
	if (i < n)
		Create(a, n, i + 1);
}

void PrintArr(int a[], const int n, int i) {
	cout << "| " << setw(4) << a[i] << " |";
	if (i < n)
		PrintArr(a, n, i + 1);
}

int MySum(int a[], int n, int s, int i) {
	if (i <= n) {
		if (a[i] % 2 == 0)
			s += a[i];
		return s + MySum(a, n, 0, i + 1);
	}
	else
		return 0;
}

int TemplateSum(int* a, const int size, int i)
{
	if (i < size)
	{
		if (a[i] % 2 == 0)
			return a[i] + TemplateSum(a, size, i + 1);
		else
			return TemplateSum(a, size, i + 1);
	}
	else
		return 0;

}


int main() {
	const int n = 25;
	int a[n];

	srand((unsigned)time(NULL));

	cout << "Array: " << endl;
	Create(a, n - 1, 0);
	PrintArr(a, n - 1, 0);
	cout << endl;
	cout << endl;
	cout << "Sum = " << MySum(a, n - 1, 0, 0) << endl;
	cout << endl;
	cout << "Sum = " << TemplateSum(a, n, 0) << endl;

	return 0;
}