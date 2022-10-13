#include <bits/stdc++.h>

using namespace std;

int algoritmo_de_kadane(vector<int> vetor, int tamanho){
	int maior = 0;
	int maior_atual = 0;
	for (int i = 0; i < tamanho; i++)
	{
		maior_atual += vetor[i];
		//maior_atual = max(vetor[i],maior_atual + vetor[i]);
		if (maior_atual > maior)
		{
			maior = maior_atual;
		}
		//maior = max(maior_atual,maior);
		cout << maior << endl;
	}
	return maior;
}

int main()
{
	int quant_caixas, num_na_caixa;
	vector<int> vetor_caixas;
	cin >> quant_caixas;
	for (int i = 0; i < quant_caixas; i++)
	{
		cin >> num_na_caixa;
		vetor_caixas.push_back(num_na_caixa);
	}
	cout << 100 + algoritmo_de_kadane(vetor_caixas, quant_caixas) << endl;;
	return 0;
}