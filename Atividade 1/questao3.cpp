#include <iostream>

using namespace std;

int main()
{
	int n,menor, maior, num;
	cin >> n;
	int saida = 0;
	int array[n];
	cin >> num;
	array[0]=num;
	maior = num;
	menor = num;
	for (int i = 1; i < n; i++)
	{
		cin >> num;
		array[i]=num;
		if (num > maior)
		{
			maior = num;
			saida++;
		}
		if (num < menor)
		{
			menor = num;
			saida++;
		}
	}
	cout << saida;
	return 0;
}