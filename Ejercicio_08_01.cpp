// Materia: Programaci�n I, Paralelo 4

// Autor: Ionit Maya Quinteros Perez

// Fecha creaci�n: 25/02/2024

// Fecha modificaci�n: 25/02/2024

// N�mero de ejericio: 8

// Problema planteado: Mostrar los primero 100 n�mero primos.

#include <iostream>
using namespace std;

bool esPrimo(int num) {
    if (num <= 1) {
		// Los numeros menores o iguales a 1 no son primos
        return false;
    }
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) {
        	// Si el numero es divisible entre i, no es primo
            return false;
        }
    }
    return true;
}

int main() {
    int contador = 0;
    int numero = 2;
	cout << "Los primeros 100 numeros primos son:" <<endl;

    while (contador < 100) {
        if (esPrimo(numero)) {
            cout <<numero <<" ";
            // Incrementamos el contador de primos encontrados
            ++contador;
        }
        // Pasamos al siguiente n�mero para verificar si es primo
        ++numero;
    }
    return 0;
}

