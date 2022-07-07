#include <iostream>
using namespace std;
int main() 
{
  int v[4], soma;
  for (int i=0; i<4; i++){
    cout << "Digite a nota " << i+1 << ":" << endl;
    cin >> v[i];
    soma+= v[i];
  }
  cout << "A média é: " << soma/4 << endl;
  return 0;
  }