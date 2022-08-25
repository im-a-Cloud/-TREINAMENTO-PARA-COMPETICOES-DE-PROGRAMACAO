#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int maior = 0;
	int menor = 0;
	int saida = 0;
	int num;
	int array[n];
	for (int i = 0; i < n; i++)
	{
		cin >> num;
		array[i]=num;
	}
	for (int i = 0; i < n; ++i)
	{
		cout << array[i] << " ";
	}
	return 0;
}