// Materia: Programaci�n I, Paralelo 4

// Autor: Ionit Maya Quinteros Perez

// Fecha creaci�n: 26/02/2024

// Fecha modificaci�n: 26/02/2024

// N�mero de ejericio: 14

// Problema planteado: Escribir un programa que calcule el volumen de una pir�mide recta de base cuadrada.

#include <iostream>
using namespace std;

int main() {
    double ladoBase, altura;
	cout <<"Ingrese el lado de la base de la piramide: ";
    cin>> ladoBase;
	cout <<"Ingrese la altura de la piramide: ";
    cin>> altura;

    double volumen = (ladoBase * ladoBase * altura) / 3.0;
	cout << "El volumen de la piramide es: " << volumen <<endl;
    return 0;
}
