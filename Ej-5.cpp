#include <iostream>
#include <string>

using namespace std;

int main(){
  int cantidadDeNumeros;
  int numero;
  int resultado = 0;

  cout << "ingresar la cantidad de numeros a sumar: ";
  cin >> cantidadDeNumeros;

  if(cantidadDeNumeros < 0){
    cout << "Por favor ingrese un numero positivo: ";
    cin >> cantidadDeNumeros;
  }

  for (int i = 0; i < cantidadDeNumeros; i++ ){
      
    cout << "Ingrese el numero " << i+1 << " a sumar: ";
    cin >> numero;

    if(numero < 0) {
      cout << "Por favor ingrese un numero positivo: ";
      cin >> numero;
    }

    resultado += numero;
  }

  cout << "suma total de sus numeros ingresados: " << resultado << endl;

  return 0;
}