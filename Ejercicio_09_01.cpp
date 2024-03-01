// Materia: Programación I, Paralelo 4

// Autor: Ionit Maya Quinteros Perez 

// Fecha creación: 25/02/2024

// Fecha modificación: 25/02/2024

// Número de ejericio: 9

// Problema planteado: Indique la cantidad de dígitos que tiene un número entero

#include <iostream>
#include <cmath> // Necesario para usar log10()

using namespace std;
int main() {
    int numero;
    cout <<"Ingrese un numero entero: ";
    cin>> numero;
    int cantidadDigitos = int(log10(numero)) + 1;
	cout <<"El numero " <<numero <<" tiene " <<cantidadDigitos <<" digitos." <<endl;
    return 0;
}
