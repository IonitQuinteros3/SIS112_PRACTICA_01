//Materia: Programacion I Paralelo 4
// Autor: Ionit Maya Quinteros Perez

// Fecha creaci�n: 24/02/2024

// Fecha modificaci�n: 24/02/2024

// N�mero de ejericio: 2

// Problema planteado: Conversi�n de temperatura de grados cent�grado a Kelvin

#include <iostream>
using namespace std;
#include <iostream>

int main() {
    double temperaturaCelsius, temperaturaKelvin;

    cout << "Ingrese la temperatura en grados Celsius: ";
    cin >> temperaturaCelsius;

    // Realiza la conversi�n a Kelvin (K = �C + 273.15)
    temperaturaKelvin = temperaturaCelsius + 273.15;

    cout <<"La temperatura en Kelvin es: " <<temperaturaKelvin <<" K" <<endl;

    return 0;
}
