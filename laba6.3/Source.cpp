#include<iostream>
#include<ctime>
#include<Windows.h>

using namespace std;

void Creat(int c[], const int size)
{
	int b;
	cout << "Масив: ";
	for (int i = 0; i < size; i++)
	{

		b = false;
		b = (-36) + rand() % (25 - (-36) + 1);

		if (b < 0)
		{
			if (b % 2 == 0)
			{
				while (b % 2 == 0)
				{
					b = (-36) + rand() % (25 - (-36) + 1);

				}
				c[i] = b;
			}
			else
				c[i] = b;
		}
		else
			c[i] = b;

		cout << " " << c[i];

	}
}


int Max(int c[], const int size, int i, int k)
{
	
	if (c[i] > k)
		 k = c[i];
	if (i<size-1)
		return Max(c, size, i + 1, k);
	else
		return k;
}


int main()
{
	SetConsoleOutputCP(1251);
	srand(time(NULL));

	cout << "Введіть кількість елементів масиву: ";
	int n; cin >> n;
	int* c = new int[n];

	Creat(c, n);
	cout << endl;


	cout << endl;

	Max(c, n, 1, c[0]);
	cout <<"Максимальне число масиву: "<< Max(c, n,1,c[0]);
	delete[] c;
	return 0;
}