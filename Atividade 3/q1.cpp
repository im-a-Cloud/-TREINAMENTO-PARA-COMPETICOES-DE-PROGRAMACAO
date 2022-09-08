#include <iostream>
#include <cmath>
#include <vector>
#include <utility> 
#include <algorithm>

using namespace std;

int main()
{
	int num_aplicantes,num_apartamentos,diferenca_max,tam_ap_desejado, tam_ap_disponiveis;
	int conseguiu_ap = 0;
	int i = 0;
	int j = 0;
	vector<int> vetor_tam_ap_desejado;
	vector<int> vetor_tam_ap_disponiveis;
	cin >> num_aplicantes;
	cin >> num_apartamentos;
	cin >> diferenca_max;
	for (int i = 0; i < num_aplicantes; i++)
	{
		cin >> tam_ap_desejado;
		vetor_tam_ap_desejado.push_back(tam_ap_desejado);
	}
	for (int i = 0; i < num_apartamentos; i++)
	{
		cin >> tam_ap_disponiveis;
		vetor_tam_ap_disponiveis.push_back(tam_ap_disponiveis);
	}
	sort(vetor_tam_ap_desejado.begin(),vetor_tam_ap_desejado.end());
	sort(vetor_tam_ap_disponiveis.begin(),vetor_tam_ap_disponiveis.end());
	while(i < num_aplicantes and j < num_apartamentos)
	{
		if (abs(vetor_tam_ap_desejado[i] - vetor_tam_ap_disponiveis[j]) <= diferenca_max)
		{
			i++;
			j++;
			conseguiu_ap++;
		}
		else
		{
			if (vetor_tam_ap_desejado[i] - vetor_tam_ap_disponiveis[j] > diferenca_max)
			{
				j++;
			}
			else
			{
				i++;
			}
		}
	}
	cout << conseguiu_ap <<endl;
	return 0;
}