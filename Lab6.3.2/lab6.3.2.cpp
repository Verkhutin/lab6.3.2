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

int Sum(int a[], int n, int s, int i) {
	if (i <= n) {
		if (a[i] % 2 == 0)
			s += a[i];
		return s + Sum(a, n, 0, i + 1);
	}
	else
		return 0;
}

template <typename A>
void TemplateCreate(A a[], A n, A i) {
	a[i] = -50 + rand() * 101 / RAND_MAX;
	if (i < n)
		Create(a, n, i + 1);
}

template <typename B>
void TemplatePrintArr(B a[], B n, B i) {
	cout << "| " << setw(4) << a[i] << " |";
	if (i < n)
		PrintArr(a, n, i + 1);
}

template <typename T>
T TemplateSum(T *a, T n, T s, T i)
{
	if (i <= n) {
		if (a[i] % 2 == 0)
			s += a[i];
		return s + Sum(a, n, 0, i + 1);
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
	cout << "Sum = " << Sum(a, n - 1, 0, 0) << endl;
	cout << endl;
	cout << "Template array: " << endl;
	int* a1 = a; const int a2 = n-1; int a3 = 0;
	TemplateCreate(a1, a2, a3);
	int* b1 = a; const int b2 = n-1; int b3 = 0;
	TemplatePrintArr(b1, b2, b3);
	cout << endl;
	cout << endl;
	int* t1 = a; const int t2 = n - 1; int t3 = 0; int t4 = 0;
	cout << "Template sum = " << TemplateSum(t1, t2, t3, t4) << endl;

	return 0;
}