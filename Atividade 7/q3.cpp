#include <bits/stdc++.h>

using namespace std;
int res;

void backtrack(int soma,vector<vector<int>>& matriz,vector<bool>& linhas,
    vector<bool>& diagonal1,vector<bool>& diagonal2,int c){
    if(c == 8) {
        res = max(soma,res);
        return;
    }
    for(int i = 0; i < 8; i++){
        if(linhas[i] || diagonal1[i-c+7] || diagonal2[c+i]) continue;
        linhas[i] = diagonal1[i-c+7] = diagonal2[c+i] = true;
        backtrack(soma+matriz[i][c],matriz,linhas,diagonal1,diagonal2,c+1);
        linhas[i] = diagonal1[i-c+7] = diagonal2[c+i] = false;
    }
}

int main()
{
    int num_placas,valor_placa;
    cin >> num_placas;
    while(num_placas--){
        res = INT_MIN;
        vector<bool> linhas(8);
        vector<bool> diagonal1(8);
        vector<bool> diagonal2(16);
        vector<vector<int>> matriz(8,vector<int>(8));
        for(int i=0;i<8;i++)
        for(int j=0;j<8;j++){
            cin >> valor_placa;
            matriz[i][j] = valor_placa;
        }
        backtrack(0,matriz,linhas,diagonal1,diagonal2,0);
        cout << setfill(' ') << setw(5) << res << endl;
    }
    return 0;
}