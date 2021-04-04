#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

void createText(int tab[], int n)
{
	for (int i = 0; i < n; i++)
	{
		tab[i] = rand() % 9 + 0;
	}
}

void printText(int tab[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << tab[i];
	}
}

void algorytmNaiwny(int t[], int w[], int n, int m)
{
	int i, j;
	i = 0;
	while (i <= n - m)
	{
		j = 0;
		while ((j < m) && (w[j] == t[i + j]))
			j++;
		if (j == m)
			cout << i + 1 << " ";
		i++;
	}
}

int main()
{
	//n-dlugosc tekstu
	//m-dlugosc wzorca

	srand(time(NULL));

	int n;
	n = 10;
	int* tekst = new int[n];
	createText(tekst, n);
	cout << "Tekst:" << endl;
	printText(tekst, n);
	cout << endl;

	int m = 3;
	int* wzorzec = new int[m];
	cout << "Podaj wzorzec skladajacy sie z 3 cyfr:" << endl;
	for (int i = 0; i < m; i++)
	{
		cin >> wzorzec[i];
	}

	cout << "Indeksy wystapien wzorca w tekscie:" << endl;
	algorytmNaiwny(tekst, wzorzec, n, m);
	cout << endl;


	return 0;
}