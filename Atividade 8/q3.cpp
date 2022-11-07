#include <bits/stdc++.h>

using namespace std;

int main()
{
	long long int quant_livros = 0;
	long long int soma = 0;
	int tempo_pra_ler_livro;
	cin >> quant_livros;
	vector<int> vetor_livros;
	int tempo_minimo = 0;
	for (int i = 0; i < quant_livros; i++)
	{
		cin >> tempo_pra_ler_livro;
		vetor_livros.push_back(tempo_pra_ler_livro);
	}
	sort(vetor_livros.begin(), vetor_livros.end());
	tempo_minimo = max(soma,(long long int)vetor_livros[quant_livros-1]*2);
	cout << tempo_minimo << endl;
	return 0;
}