#include <bits/stdc++.h>
#include <regex>

using namespace std;

int main() {
  long int tamanho;
  char letra;
  string string_concatenada;
  cin >> tamanho;
  string string_final;
  int contagemAtual = 0;
  int contagemTotal = 0;
  for (int i = 0; i < tamanho; i++) {
    cin >> letra;
    string_concatenada += letra;
  }
  for (int i = 0; i < string_concatenada.size(); i++)
  {
    if (string_concatenada[i] == 'a') 
    {
      contagemAtual++;
      if( (i == tamanho -1))
      {
        if (contagemAtual > 1)
        {
          contagemTotal = contagemTotal + contagemAtual;
        }
        
      }
    }
    else if(contagemAtual > 1)
    {
      contagemTotal = contagemTotal + contagemAtual;
      contagemAtual = 0;
    }
    else
    {
      contagemAtual = 0;
    }
  }
  cout << contagemTotal << endl;
  return 0;
}