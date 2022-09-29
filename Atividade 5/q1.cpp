#include <iostream>
#include <cmath>
#include <vector>
#include <utility> 
#include <algorithm>

using namespace std;

int main()
{
	int tempo_mimindo_nescessario, duracao_voo, num_refeicoes, tempo_refeicao;
	int deu_bom = 0;
	vector<int> horas_refeicao;
	cin >> tempo_mimindo_nescessario;
	cin >> duracao_voo;
	cin >> num_refeicoes;

	if (num_refeicoes == 0)
	{
		cout << "N" << endl;
		return 0;
	}

	for (int i = 0; i < num_refeicoes; i++)
	{
		cin >> tempo_refeicao;
		horas_refeicao.push_back(tempo_refeicao);
	}
	horas_refeicao.push_back(duracao_voo);
	horas_refeicao.push_back(0);
	sort(horas_refeicao.begin(), horas_refeicao.end());

	for (int i = 0; i < horas_refeicao.size()-1; i++)
	{
		if (abs(horas_refeicao[i] - horas_refeicao[i+1]) >= tempo_mimindo_nescessario)
		{
			deu_bom++;
		}
	}
	if (deu_bom > 0)
	{
		cout << "Y" << endl;
	}
	else
	{
		cout << "N" << endl;
	}
	return 0;
}