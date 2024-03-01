// Materia: Programación I, Paralelo 4

// Autor: Ionit Maya Quinteros Perez

// Fecha creación: 27/02/2024

// Fecha modificación: 27/02/2024

// Número de ejericio: 16

// Problema planteado: Leer un numero n y también un intervalo de cerrado de valores (a,b), si el numero está  dentro del intervalo obtenga su cuadrado (n*n), 
//si es menor que el límite inferior, obtenga su valor inverso (1/n), si está por encima del intervalo obtenga su mitad (n/2)

#include <iostream>
using namespace std;
int main() {
    double n, a, b;
    cout <<"Ingrese un numero y el intervalo (a b): ";
    cin>> n>> a>> b;

    if (n >= a && n <= b) {
        if (n < (a + b) / 2.0) {
            // Calcula y mouestra el cuadrado del numero
            cout << "El cuadrado del numero es: " << n * n <<endl;
        } else {
            // Calcula y muestra la mitad del numero
            cout << "La mitad del numero es: " << n / 2.0 <<endl;
        }
    } else if (n < a) {
        // Calcula y muestra el inverso del numero
        cout << "El inverso del numero es: " << 1.0 / n <<endl;
    }
    return 0;
}

