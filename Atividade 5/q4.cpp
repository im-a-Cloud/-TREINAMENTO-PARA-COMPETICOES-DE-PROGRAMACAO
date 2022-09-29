#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> vetor1;
    vector<int> vetor2;
    vector<int>::iterator iterador;
    int elementos;
    int tamanho;
  
    while(cin >> tamanho)
    {
        vetor1.clear();
        vetor2.clear();
        for(int i = 0; i < tamanho; i++)
        {
            cin>>elementos;
            vetor1.push_back(elementos);
            vetor2.push_back(0);
        }
        vetor2[0] = 1;
        for(int i=0; i< tamanho-1; i++)
        {
            elementos=abs(vetor1[i+1] - vetor1[i]);
            if(elementos > 0 && elementos < tamanho)
            vetor2[elementos]=1;
        }

        iterador = find (vetor2.begin(),vetor2.end(),0);
        if(iterador == vetor2.end()){
            cout<<"Jolly"<<endl;
            return 0;
        }
        else
        {
            cout<<"Not jolly"<<endl;
            return 0;
        }
    }
  
    return 0;
}