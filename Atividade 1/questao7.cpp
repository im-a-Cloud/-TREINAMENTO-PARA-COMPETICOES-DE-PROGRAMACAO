#include <iostream>
#include <string>

using namespace std;

int traduz(string numero){
if (numero.size() > 3){
		return 3;
	}
	int soma = 0;
	if (numero[0] == 'o')
	{
		soma++;
	}
	if (numero[1] == 'n')
	{
		soma++;
	}
	if (numero[2] == 'e')
	{
		soma++;
	}
	if (soma >1)
	{
		return 1;
	}
	else{
		return 2;
	}
}

int main(){
	int num;
	string palavra;
	cin >> num;
	string palavras[num];
	for (int i = 0; i < num; i++)
	{
		cin >> palavra;
		palavras[i] = palavra;
	}

	for (int j = 0; j < num; j++)
	{
		cout << traduz(palavras[j])<<endl;
	}

	return 0;
}