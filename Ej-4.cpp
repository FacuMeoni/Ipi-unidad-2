#include <iostream>
#include <string>

using namespace std;

int main(){
    int cantidadDeNumeros;
    int numero;
    int resultado = 0;

    cout << "ingresar la cantidad de numeros a sumar";
    cin >> cantidadDeNumeros;

    for (int i = 0; i < cantidadDeNumeros; i++ ){
        
        cout << "ingrese el numero a sumar " << i+1 << ": ";
        
        cin >> numero;
        resultado += numero;
    }

    cout << "suma total de sus numeros ingresados" << resultado;
    return 0;
}