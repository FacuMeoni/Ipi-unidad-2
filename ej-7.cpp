#include <iostream>
#include <string>

using namespace std;

int main() {
    int numAlumno;
    int nota;
    int aprobados = 0;
    int desaprobados = 0;

    while(numAlumno != 0) {
        cout << "Ingrese el Numero del Alumno: ";
        cin >> numAlumno;
        
        cout << "Ingrese la nota recibida: ";
        cin >> nota;
        
        if(nota > 4) aprobados += 1;
        if(nota < 4) desaprobados += 1;
    }
    
    cout << "Aprobados: " << aprobados << endl;
    cout << "Desaprobados: " << desaprobados << endl;
}