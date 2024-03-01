// Materia: Programaci�n I, Paralelo 4

// Autor: 	Ionit Maya Quinteros Perez

// Fecha creaci�n: 28/02/2024

// Fecha modificaci�n: 28/02/2024

// N�mero de ejericio: 19

// Problema planteado: Leer un numero entero y muestre la suma de sus dos primeros d�gitos

#include <iostream>
using namespace std;

int main() {
    int numero, primerDigito, segundoDigito, suma;
    cout <<"Ingrese un numero entero: ";
    cin >> numero;

    // Extrae los dos primeros d�gitos del numero
    primerDigito = numero / 10;
    segundoDigito = numero % 10;

    // Calcula la suma de los dos primeros digitos
    suma = primerDigito + segundoDigito;
    cout << "La suma de los dos primeros digitos es: " << suma << endl;
    return 0;
}
