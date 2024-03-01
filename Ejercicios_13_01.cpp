// Materia: Programación I, Paralelo 4

// Autor: Ionit Maya Quinteros Perez 

// Fecha creación: 26/02/2024

// Fecha modificación: 27/02/2024

// Número de ejericio: 13

// Problema planteado: Leer un valor en bolivianos y convierta a Euros, Dólares y Libras Esterlinas.

#include <iostream>
using namespace std;

int main() {
    double bolivianos, euros, dolares, libras;
    const double tasaEuros = 0.12;
    const double tasaDolares = 0.14;
    const double tasaLibras = 0.10;
	cout <<"Ingrese el monto en bolivianos: ";
    cin>> bolivianos;

    euros = bolivianos * tasaEuros;
    dolares = bolivianos * tasaDolares;
    libras = bolivianos * tasaLibras;

    cout <<"Euros: " <<euros <<endl;
    cout <<"Dolares: " <<dolares <<endl;
    cout <<"Libras Esterlinas: " <<libras <<endl;
    return 0;
}

