// Materia: Programación I, Paralelo 4

// Autor: Ionit Maya Quinteros Perez

// Fecha creación: 25/02/2024

// Fecha modificación: 25/02/2024

// Número de ejericio: 10

// Problema planteado: Escriba un programa que ingrese varios valores numéricos, hasta el que el usuario ingrese el valor de cero calculo la suma y el promedio de estos

#include <iostream>
using namespace std;

int main() {
    int valor, suma = 0, contador = 0;
	cout <<"Ingrese valores numuricos (ingrese 0 para detener):" <<endl;
    do {
        cin >> valor;
        suma += valor;
        contador++;
    } while (valor != 0);

    // Calcula el promedio solo si hay valores distintos de cero
    if (contador > 1) {
        double promedio = double(suma) / (contador - 1);
        cout <<"Suma: " <<suma <<endl;
        cout <<"Promedio: " <<promedio <<endl;
    } else {
        cout <<"No se ingresaron valores para calcular la suma y el promedio." <<endl;
    }
    return 0;
}
