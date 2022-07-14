#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(int arg, char const* argv[]) 
{
  //Faça um algoritmo para preencher um vetor de 20 números. Após isto, deverá ser lido mais um número qualquer e verificar se esse número existe no vetor ou não. Se existir, o algoritmo deve pedir um novo número.

  srand((unsigned) time(0)); // gerar numeros aleatórios reais
  int maior=20, menor=1, aleatorio, v[20], x;
  for (int i=0; i<20; i++){
  aleatorio = rand ()%(maior-menor+1) + menor;
    v[i] = aleatorio;
    while(true){
     cout << "Digite um valor qualquer: ";
      cin >> x;
      for(int j=0; j<x; j++){
      if(x==v[i]){
       cout<<"ERRO! O numero ja esta presente no vetor, digite outro valor ";
        }
      break;
      }
    }
  }
  return 0;
  }