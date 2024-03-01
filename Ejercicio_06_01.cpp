// Materia: Programación I, Paralelo 4

// Autor: Ionit Maya Quinteros Perez

// Fecha creación: 24/02/2024

// Fecha modificación: 24/02/2024

// Número de ejericio: 6

// Problema planteado: En el estacionamiento del Cinecenter se cobra 17 Bs la primera hora, si pasa de una hora se cobra 15 Bs adicional por hora.
// Ingrese la cantidad de horas que un vehículo está estacionado y calcule cuanto debe pagar.


#include <iostream>
using namespace std;

int main() {
    int horasEstacionado;
    const int tarifaPrimeraHora = 17;
    const int tarifaAdicional = 15;

    cout << "Ingrese la cantidad de horas estacionado: ";
    cin >> horasEstacionado;

    // Calcular el costo total
    int costoTotal;
    if (horasEstacionado <= 1) {
        costoTotal = tarifaPrimeraHora;
    } else {
        costoTotal = tarifaPrimeraHora + (horasEstacionado - 1) * tarifaAdicional;
    }
    // Mostrar el costo total
    cout <<"El costo total de estacionamiento es: " <<costoTotal <<" Bs" <<endl;

    return 0;
}
