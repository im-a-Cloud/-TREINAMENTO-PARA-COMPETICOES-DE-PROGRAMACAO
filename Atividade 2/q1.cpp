#include <iostream>
#include <vector>
#include <utility> 
#include <algorithm>

using namespace std;

int main()
{
	int n,habilidade;
	int total = 0;
	pair <int, int> dupla_de_2;
	cin >> n;
	vector<int> vetor_habilidade;
	for (int i = 0; i < n; i++)
	{
		cin >> habilidade;
		vetor_habilidade.push_back(habilidade);
	}

	sort(vetor_habilidade.begin(), vetor_habilidade.end());

	for (int i = 0; i < vetor_habilidade.size(); i+=2)
	{
		dupla_de_2 = make_pair(vetor_habilidade[i], vetor_habilidade [i+1]);
		total += dupla_de_2.second - dupla_de_2.first;
	}

	cout << total << endl;
}