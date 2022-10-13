#include <bits/stdc++.h>

using namespace std;

int gerar_carta(){
	int carta = (srand() %13) + 1;
	if (carta >=10) {
		carta = 10;
	}
	return carta;
}

int main()
{
	int rodadas,cartas_publicas;
	vector<int> vetor_cartas_publicas;
	int soma = 0;
	int soma_jogador1 = 0;
	int soma_jogador2 = 0;
	cin >> rodadas;
	for (int i = 0; i < 2; i++)
	{
		cartas_publicas = gerar_carta();
		soma_jogador1 += cartas_publicas;
		cout << cartas_publicas " ";
	}
	cout << endl;
	for (int i = 0; i < 2; i++)
	{
		cartas_publicas = gerar_carta();
		soma_jogador1 += cartas_publicas;
		cout << cartas_publicas " ";
	}
	for (int i = 0; i < rodadas; i++)
	{
		cartas_publicas = gerar_carta(); //gera números aletórios entre 1 e 13
		if (cartas_publicas >= 10)
		vetor_cartas_publicas.push_back(cartas_publicas);
		soma += cartas_publicas;
	}
	return 0;
}