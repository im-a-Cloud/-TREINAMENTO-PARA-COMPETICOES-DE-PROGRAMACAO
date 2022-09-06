#include <algorithm>
#include <iostream>
#include <vector>
#include <utility> 

using namespace std;

int main()
{
	int tamanho_a, tamanho_b,num, soma;
	pair <int, int> par_ab;
	vector<int> vetor_a;
	vector<int> vetor_b;

	cin >> tamanho_a;
	for (int i = 0; i < tamanho_a; i++)
	{
		cin >> num;
		vetor_a.push_back(num);
	}

	cin >> tamanho_b;

	for (int i = 0; i < tamanho_b; i++)
	{
		cin >> num;
		vetor_b.push_back(num);
	}

	sort(vetor_a.begin(), vetor_a.end());
	sort(vetor_b.begin(), vetor_b.end());

	for (int i = 0; i < tamanho_a; i++)
	{
		for (int j = 0; j < tamanho_b; j++)
		{
			par_ab = make_pair(vetor_a[i],vetor_b[j]);
			soma += par_ab.second + par_ab.first;
			if (soma == vetor_a[i] or soma == vetor_b[j])
			{
				
			}
		}
	}

	return 0;
}