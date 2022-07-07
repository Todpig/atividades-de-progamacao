#include <iostream>
using namespace std;
int main() 
{
  float v[10];
  for (int i=0; i<10; i++) {
       v[i]=i*2;}
  for(int j=9;j>=0;j--){
    cout << v[j] << endl;
  }
    return 0;
    }