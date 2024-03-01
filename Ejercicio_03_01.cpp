// Materia: Programación I, Paralelo 4

// Autor: Ionit Maya Quinteros Perez

// Fecha creación: 24/02/2024

// Fecha modificación: 24/02/2024

// Número de ejericio: 3

// Problema planteado: Calcular la distancia entre dos puntos P1 y P2 localizados en un plano X Y raíz cuadrada ( (x2-x1) elevado 2 + (y2-y1) elevado 2 )

#include <iostream>
#include <cmath> // Necesario para usar la función sqrt()
using namespace std;
int main() {
    double x1, y1, x2, y2, distancia;
	cout << "Ingrese las coordenadas de P1 (x1 y1): ";
	cin>> x1>> y1;
    cout<< "Ingrese las coordenadas de P2 (x2 y2): ";
    cin>> x2>> y2;

    // Calcular la distancia utilizando la fórmula
    distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

	cout <<"La distancia entre P1 y P2 es: " <<distancia <<endl;

    return 0;
}
