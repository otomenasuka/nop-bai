#include <iostream>
using namespace std;
#include <ctime>

#define MAX 50
typedef int MT[MAX][MAX];

void Nhap(int &n)
{
	do
	{
		cout << "Nhap: ";
		cin >> n;
	} while (n <= 0 || n>MAX);
}

void MaTranRandom(MT a, int n)
{
	srand(time(0));
	for (int i = 0; i<n; i++)
	{
		for (int j = 0; j<n; j++)
		{
			a[i][j] = rand() % 10;
			cout << a[i][j] << "\t";
		}
		cout << "\n" << "\n";
	}
	cout << "\n" << "\n";
}

void Xuat(int n, MT a)
{
	for (int i = 0; i<n; i++)
	{
		for (int j = 0; j<n - 1; j++)
		{
			cout << "\t";
			if (j == i)
			for (int t = j; t<n - 1; t++)
				cout << a[i][t + 1] << "\t";
		}
		cout << "\n" << "\n";
	}
}

void main()
{
	MT a;
	int n;
	Nhap(n);
	MaTranRandom(a, n);
	Xuat(n, a);
	cin.ignore();
	cin.get();
}


