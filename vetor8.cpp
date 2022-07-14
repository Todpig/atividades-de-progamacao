#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(int arg, char const* argv[]) 
{
  //Faça um algoritmo para ler 15 números e armazenar em um vetor VET, verificar e escrever se existem números repetidos no vetor VET e em que posições se encontram
srand((unsigned) time(0)); // gerar numeros aleatórios reais
  int maior=15, menor=1, aleatorio, vet[15];
  int aux, cont, i;
  for (int i=0; i<15; i++){
  aleatorio = rand ()%(maior-menor+1) + menor;
    vet[i] = aleatorio;
  }
      aux=0;
          for(int j=0; j<14; j++){
          cont=0;
           for(int k=i+1; k<15; k++){
            if(vet[i]==vet[k]){
             if(cont==0){
          cout << "O numero " << vet[i] << " foi repetido na posiçao " << i << endl;   
             }
            }   
           }  
          }
         
return 0;
}