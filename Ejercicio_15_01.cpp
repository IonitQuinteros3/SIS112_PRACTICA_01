// Materia: Programación I, Paralelo 4

// Autor: Ionit Maya Quinteros Perez

// Fecha creación: 27/02/2024

// Fecha modificación: 27/02/2024

// Número de ejericio: 15

// Problema planteado: Leer tres números enteros y si son diferentes entre sí determine cual es el menor

#include <iostream>
using namespace std;
int main() {
    int a, b, c;
    cout <<"Ingrese tres numeros enteros diferentes: ";
    cin>> a>> b>> c;
    int menor = a;
    // Encuentra el menor numero entre a, b y c
    if (b < menor) {
        menor = b;
    }
    if (c < menor) {
        menor = c;
    }
	cout <<"El menor numero es: " <<menor <<endl;
    return 0;
}
