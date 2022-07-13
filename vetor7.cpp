#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(int arg, char const* argv[]) 
{
  //Escreva um programa para preencher um vetor A de 10 elementos inteiros e um valor X. Em seguida escrever na tela "ACHEI" se o valor X existir em A e "NÃO ACHEI" caso contrário.
srand((unsigned) time(0)); // gerar numeros aleatórios reais
  int maior=10, menor=1, aleatorio, v[10], x;
  for (int i=0; i<10; i++){
  aleatorio = rand ()%(maior-menor+1) + menor;
    v[i] = aleatorio;
    cout << "Digite o valor de X: ";
    cin >> x;
    if(x==v[i]){
      cout << "ACHEI" << endl;
      break;
    }
    else {
      cout << "NÃO ACHEI" << endl;
    }
}
  
  return 0;
  }