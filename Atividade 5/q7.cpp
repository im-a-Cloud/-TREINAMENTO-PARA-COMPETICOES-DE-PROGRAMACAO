#include <iostream>
#include <unordered_set>
#include <vector>

using namespace std;

int main()
{
    vector<int> lista_musga;
    unordered_set<int> lista_musga_sem_repetir;
    int quant_musga, id_musga;
    int  quant_musga_unicas = 0;
    cin >> quant_musga;
    for (int i = 0; i < quant_musga; i++)
    {
        cin >> id_musga;
        lista_musga.push_back(id_musga);
    }
    for (int i = 0; i < lista_musga.size(); i++)
    {
        while(lista_musga_sem_repetir.find(lista_musga[i]) != lista_musga_sem_repetir.end()){
            lista_musga_sem_repetir.erase(lista_musga[i - lista_musga_sem_repetir.size()]);
        }
        lista_musga_sem_repetir.insert(lista_musga[i]);
        if (lista_musga_sem_repetir.size() > quant_musga_unicas)
        {
            quant_musga_unicas = lista_musga_sem_repetir.size();
        }
    }
    cout << quant_musga_unicas << endl;
    return 0;
}