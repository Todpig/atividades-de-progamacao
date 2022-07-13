#include <iostream>
using namespace std;
int main() 
{
  //Faça um Programa que peça as quatro notas de 10 alunos, calcule e armazene num vetor a média de cada aluno, imprima o número de alunos com média maior ou igual a 7.0.
int nota[4], aluno[10];
  float med;
  for (int i=0; i<10; i++){
    for (int j=0; j<4; j++){
    cout << " Digite a nota: " << endl;
    cin >>nota[j] ;
    med += nota[j];
    } 
    med = med/4;
    aluno[i]=med;
    if (med >= 7){
      cout << "A media é: " << aluno[i] << endl;
      cout << "Aluno " << i+2;
    }
  }
  return 0;
  }