#include <iostream>
using namespace std;
int main() 
{//Faça um algoritmo para ler um vetor de 20 números. Após isto, ler mais um número qualquer, calcular e escrever quantas vezes esse número aparece no vetor.
int v[2], x, i, cont;
  for(int i=0; i<2; i++){
    v[i]=i*2;
    }
  cout << "Digite o numero: " << endl;
  cin >>x;
  cont=0;
  for (int j=0; j<2; j++){
    if (v[j]==x){
      cont+=1;
    }
  }
  cout << "O numero aparece " << cont << " vez no vetor" << endl;
  }