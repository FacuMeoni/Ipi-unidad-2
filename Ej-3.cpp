#include <iostream>
#include <string>

using namespace std;

int main(){
  int num = 0;

  cout << "Ingrese un numero entero: ";
  cin >> num;

  if(num % 2 == 0){
    cout << "Se mostrara ";
    for (int i = num; i <= num * 2; i += 2)
    {
      cout << i << " ";
    }
  }else{
      cout << "Se mostrara ";
     for (int i = num; i <= num * 2; i++)
    {
      cout << i << " ";
    }
  }
  return 0;
}
