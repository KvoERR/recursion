#include <iostream>
#include <math.h>
using namespace std;

int n, x;
float s=0;
float rec(int n)
{
	if (n == -1)
		return s;
	s += (pow(-1, n) * (pow(x, 2 * n + 1) / (2 * n + 1)));
	return rec(n - 1);
}
int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "¬ведите количество элементов последовательности: ";
	cin >> n;
	cout << "¬ведите значение переменной x: ";
	cin >> x;
	cout <<"S = ";
	cout<<rec(n);
}