

#include <iostream>
#include <string>
using namespace std;


int main(){

  string day = "lunes";
  int AC = 3;

  cout << "Ingrese dia: ";
  cin >> day;

  cout << "Ingrese Cantidad de Articulos comprados: ";
  cin >> AC;
    
  if(day == "lunes" && AC >= 3){
  cout << "Accede al descuento!";
  }


  return 0;
}

