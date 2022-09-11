#include<iostream>
#include<climits>

using namespace std;

int soma_max_subarray(int array_num[], int tamanho)
{
	int maior_ate_agora = INT_MIN, maior_local = 0;
	for (int i = 0; i < tamanho; i++)
	{
		maior_local = maior_local + array_num[i];
		if (maior_ate_agora < maior_local)
		{
			maior_ate_agora = maior_local;
		}
		if (maior_local < 0)
		{
			maior_local = 0;
		}
	}
	return maior_ate_agora;
}

int main()
{
	int tamanho, valor;
	int soma_max = 0;
	cin >> tamanho;
	int vetor_numeros[tamanho];
	for (int i = 0; i < tamanho; i++)
	{
		cin >> valor;
		vetor_numeros[i] = valor;
	}
	soma_max = soma_max_subarray(vetor_numeros, tamanho);
	cout << soma_max << endl;
	return 0;
}