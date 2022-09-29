#include<iostream>
#include<vector>

using namespace std;

int main(){
    
    int num_pilhas;
    int conjuntos =1;

    while(scanf("%d",&num_pilhas) && num_pilhas){
           
           vector <int> vetor_tijolos;
           int tijolo;
           int media = 0;
           int movimentos = 0;
           
           for(int i = 0;i<num_pilhas;i++){
                 int tijolo;
                 scanf("%d",&tijolo);
                 media+=tijolo;
                 vetor_tijolos.push_back(tijolo);
           }
           media/=num_pilhas;
           for(int i=0;i<num_pilhas;i++){
                 if(vetor_tijolos[i]>media){
                     movimentos  += vetor_tijolos[i]- media;               
                 }  
           } 
           printf("Set #%d\n", conjuntos);
           printf("The minimum number of movimentos  is %d.\n\n", movimentos );
           conjuntos++;
    }    
 return 0;   
}