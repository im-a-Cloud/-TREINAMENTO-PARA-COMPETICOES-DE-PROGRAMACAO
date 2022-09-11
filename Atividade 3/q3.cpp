#include <iostream>
#include <vector>
#include <utility> 
#include <algorithm>

using namespace std;

int main()
{
	vector<int> vetor_num;
	int tamanho, num; 
	int num_distintos = 0;
	cin >> tamanho;
	for (int i = 0; i < tamanho; i++)
	{
		cin >> num;
		vetor_num.push_back(num);
	}
	sort(vetor_num.begin(),vetor_num.end());
	for (int i = 0; i < vetor_num.size(); i++)
	{
		if (vetor_num[i] != vetor_num[i+1])
		{
			num_distintos++;
		}
	}
	cout << num_distintos <<endl;
	return 0;
}