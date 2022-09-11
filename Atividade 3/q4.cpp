#include <algorithm>
#include <iostream>
#include <vector>
#include <utility> 

using namespace std;

int main(){
	int num_clientes;
	int hora_chegada, hora_saida;
	int num_max_clientes = 0;
	int num_atual_clientes = 0;

	vector<pair<int,int>> vetor_hora_chegada_saida;
	
	cin >> num_clientes;
	for (int i = 0; i < num_clientes; i++)
	{
		cin >> hora_chegada;
		cin >> hora_saida;
		vetor_hora_chegada_saida.push_back({hora_chegada, 1});
		vetor_hora_chegada_saida.push_back({hora_saida, - 1});
	}

	sort(vetor_hora_chegada_saida.begin(), vetor_hora_chegada_saida.end());

	for (const pair<int,int>& vetor : vetor_hora_chegada_saida)
	{
		num_atual_clientes += vetor.second;
		num_max_clientes = max(num_max_clientes, num_atual_clientes);
	}
	cout << num_max_clientes << endl;
	return 0;
}