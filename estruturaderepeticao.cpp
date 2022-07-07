#include <iostream> // inicio
using namespace std;
int main(){
int a=4, b=4; 
  int ca=2;
  int r=b;  // variaveis
  while(ca<=a){ // primeira estrutura de repetiçao.
    int e, cb;
    e=b;
    cb=1;
    while(cb<ca){  // segunda estrutura de repetiçao.
      e=e*b;
      cb=cb+1;
    }
    r=r+e;
    ca=ca+2;
  }
  cout << r << endl; // valor impresso do resultado
  // fibonacci
  unsigned long int n; // variaveis de fibonacci
  cout << "press a number: ";
  unsigned long int soma=0;
  cin >> n; // o termo do fibonacci
  if (n==1){ // primeira condiçao
    cout << 0;
  }
  if(n==2){ //segunda condiçao
    cout << 1;
  }
  else { // condicçao oposta "SE NÃO"
    unsigned long int f1=0; //variaveis
    unsigned long int f2=1;
    while(n>0){ // estrutura de repetiçao
      cout << soma << " "; //impreçao da 'soma'
      soma = f1 + f2;
      f2=f1; //variavel f2 recebe f1
      f1=soma; //variavel f1 recebe soma
      n=n-1; 
    }
  }
  
  cout << endl;
  return 0; // fim
}