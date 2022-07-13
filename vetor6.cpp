#include <iostream>
using namespace std;
int main() 
{
  //Faça um Programa que leia dois vetores com 10 elementos cada. Gere um terceiro vetor de 20 elementos, cujos valores deverão ser compostos pelos elementos intercalados dos dois outros vetores.
  int a[10], b[10], c[20];
  for (int i=0; i<10; i++){
    a[i]=i+1;
  }
  for (int j=0; j<10; j++){
    b[j]=10-j;
  }
  int i=0, j=0;
  for (int k=0; k<20; k++){
    if(k%2==0){
      c[k] = a[i];
      i+=1;
    }
    else{
      c[k]=b[j];
      j+=1;
    }
    cout << c[k] << " ";
  }
  cout << endl;
  return 0;
  }