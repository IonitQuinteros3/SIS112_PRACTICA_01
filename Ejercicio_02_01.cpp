//Materia: Programacion I Paralelo 4
// Autor: Ionit Maya Quinteros Perez

// Fecha creación: 24/02/2024

// Fecha modificación: 24/02/2024

// Número de ejericio: 2

// Problema planteado: Conversión de temperatura de grados centígrado a Kelvin

#include <iostream>
using namespace std;
#include <iostream>

int main() {
    double temperaturaCelsius, temperaturaKelvin;

    cout << "Ingrese la temperatura en grados Celsius: ";
    cin >> temperaturaCelsius;

    // Realiza la conversión a Kelvin (K = °C + 273.15)
    temperaturaKelvin = temperaturaCelsius + 273.15;

    cout <<"La temperatura en Kelvin es: " <<temperaturaKelvin <<" K" <<endl;

    return 0;
}
