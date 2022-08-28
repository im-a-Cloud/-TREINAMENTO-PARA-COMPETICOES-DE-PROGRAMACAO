#include <iostream>

using namespace std;

int main(){
	int questoes, p,v,t;
	cin >> questoes;
	int certeza = 0;

	for (int i = 0; i < questoes; i++)
	{
		cin >> p >> v >> t;
		if (p == 1 and v == 1 or p == 1 and t ==1 or v == 1 and t ==1)
		{
			certeza++;
		}
	}
	cout << certeza << endl;
	return 0;
}