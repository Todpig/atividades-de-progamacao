#include <iostream>
#include <locale.h>
using namespace std;
int main(){
//Escrever um programa que possibilite calcular a área total em metros de uma residência com os cômodos sala, cozinha, banheiro, dois quartos, área de serviço, quintal, garagem, entre outros que podem ser fornecidos ao programa. O programa deve solicitar a entrada do nome, da largura e do comprimento de um determinado cômodo. Em seguida, deve apresentar a área do cômodo lido e também uma mensagem solicitando ao usuário a confirmação de continuar calculando novos cômodos. Caso o usuário responda “NÃO”, o programa deve apresentar o valor total acumulado da área residencial.
int areaparcial, areatotal=0, i=1, c, l;
  string comodos, resposta, sim, nao;
  while(i<=2){
    
        cout << "Digite o comodo: ";
        cin >> comodos;
        cout << "Digite o comprimento e largura respectivamente:\n";
        cin >> c;
        cin >> l;
        areaparcial=c*l;
        cout << areaparcial << endl;
        i++;
      while(i<=2){
  cout << "Deseja calcular a area de outro comodo? (s/n)\n";
          cin >> resposta;
  if(resposta.compare("s")==0) {
        cout << "Digite o comodo: ";
        cin >> comodos;
        cout << "Digite o comprimento e largura respectivamente:\n";
            cin >> c;
            cin >> l;
        areaparcial=c*l;
        areatotal+=areaparcial;
        cout << areaparcial << endl;
    }
  else{
    cout << "A area total é; " << areatotal << endl;
  }
  }
  }
  return 0;
}