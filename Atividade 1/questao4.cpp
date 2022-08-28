#include <iostream>

using namespace std;

int collatz(int num){
	int ciclo = 1;
	while (num != 1){
		if (num % 2 !=0)
		{
			num = num * 3 + 1;
		}
		else
		{
			num = num / 2;
		}
		ciclo++;
	}
	return ciclo;
}
int num_max_ciclos(int inicio, int fim){
	if (inicio > fim)
	{
		int aux = inicio;
		inicio = fim;
		fim = aux;
	}
	int max_ciclo = 0;

	for (; inicio < fim; inicio++)
	{
		int tamanho_desse_ciclo = collatz(inicio);
		if (tamanho_desse_ciclo > max_ciclo)
		{
			max_ciclo = tamanho_desse_ciclo;
		}
	}
	return max_ciclo;
}

int main()
{
	int i,j;
	cin >> i >> j;
	int ciclos = num_max_ciclos(i,j);
	cout << i << " " << j << " " << ciclos;
	return 0;
}
