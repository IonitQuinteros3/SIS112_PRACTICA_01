// Materia: Programaci�n I, Paralelo 4

// Autor: Ionit Maya Quinteros Perez

// Fecha creaci�n: 24/02/2024

// Fecha modificaci�n: 24/02/2024

// N�mero de ejericio: 5

// Problema planteado: Numero amigo

#include <iostream>
using namespace std;
int calcularSumaDivisores(int numero) {
    int suma = 1; // 1 es un divisor propio de todos los n�meros
    for (int i = 2; i * i <= numero; ++i) {
        if (numero % i == 0) {
            suma += i;
            if (i != numero / i) {
                suma += numero / i;
            }
        }
    }
    return suma;
}

int main() {
    int limiteSuperior;
	cout << "Ingrese el limite superior para buscar pares de numeros amigos: ";
	cin >> limiteSuperior;

    for (int a = 1; a <= limiteSuperior; ++a) {
        int b = calcularSumaDivisores(a);
        if (b > a && calcularSumaDivisores(b) == a) {
            cout <<"Par de numeros amigos: (" <<a <<", " <<b <<")" <<endl;
        }
    }
    return 0;
}

