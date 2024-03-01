//Materia: Programacion I Paralelo 4

// Autor: Ionit Maya Quinteros Perez 

// Fecha creación: 24/02/2024

// Fecha modificación: 24/02/2024

// Número de ejericio: 1

// Problema planteado: Promedio de notas 

#include <iostream>
using namespace std;
int main() {
    int N;
    double nota, suma = 0.0;
    cout << "Ingrese la cantidad de notas: ";
    cin >> N;

    // Lee y suma las notas
    for (int i = 1; i <= N; ++i) {
        cout << "Ingrese la nota " << i << ": ";
        cin >> nota;
        suma += nota;
    }
    // Calcula el promedio
    double promedio = suma / N;
    cout <<"El promedio de las " <<N <<" notas es: " <<promedio <<endl;

    return 0;
}



