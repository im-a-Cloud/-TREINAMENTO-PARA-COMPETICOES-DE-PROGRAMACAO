#include <bits/stdc++.h>
#include <regex>

using namespace std;

int main() {
  long int tamanho;
  char letra;
  string string_concatenada;
  cin >> tamanho;
  string string_final;
  int contagem = 0;
  for (int i = 0; i < tamanho; i++) {
    cin >> letra;
    string_concatenada += letra;
  }
  for (int i = 0; i < string_concatenada.size(); i++)
  {
    if (string_concatenada[i] == 'a' and string_concatenada[i + 1] == 'a') {
      contagem++;
    }
  }
  if (contagem == 0)
  {
    cout << contagem << endl;
    return 0;
  }
  contagem = 1;
  regex bab("bab");
  regex aba("aba");
  string_final = regex_replace(string_concatenada, bab, "");
  string_final = regex_replace(string_final, aba, "");

  for (int i = 0; i < string_final.size(); i++) {
    if (string_final[i] == 'a' and string_final[i + 1] == 'a') {
      contagem++;
    }
  }
  cout << contagem << endl;
  return 0;
}