// Materia: Programación I, Paralelo 4

// Autor: Ionit Maya Quinteros Perez

// Fecha creación: 24/02/2024

// Fecha modificación: 24/02/2024

// Número de ejericio: 5

// Problema planteado: Numero amigo

#include <iostream>
using namespace std;
int calcularSumaDivisores(int numero) {
    int suma = 1; // 1 es un divisor propio de todos los números
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

