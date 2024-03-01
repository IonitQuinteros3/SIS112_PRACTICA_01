// Materia: Programación I, Paralelo 4

// Autor: Ionit Maya Quinteros Perez

// Fecha creación: 24/02/2024

// Fecha modificación: 24/02/2024

// Número de ejericio: 7

// Problema planteado: Realice un programa que ingrese los meses de 1 al 12 y el programa despliegue el mes en literal. 
// Si se ingresa un valor distinto a 1 al 12 el programa debe dar un mensaje de mes inválido.

#include <iostream>
#include <string>
using namespace std;

int main() {
    int numeroMes;
    string nombreMes;
	cout <<"Ingrese un numero de mes (1 al 12): ";
    cin>> numeroMes;

    // Verifica si el numero de mes esta dentro del rango
    if (numeroMes >= 1 && numeroMes <= 12) {
        // Asigna el nombre del mes en literal
        switch (numeroMes) {
            case 1:
                nombreMes = "Enero";
                break;
            case 2:
                nombreMes = "Febrero";
                break;
            case 3:
                nombreMes = "Marzo";
                break;
            case 4:
                nombreMes = "Abril";
                break;
            case 5:
                nombreMes = "Mayo";
                break;
            case 6:
                nombreMes = "Junio";
                break;
            case 7:
                nombreMes = "Julio";
                break;
            case 8:
                nombreMes = "Agosto";
                break;
            case 9:
                nombreMes = "Septiembre";
                break;
            case 10:
                nombreMes = "Octubre";
                break;
            case 11:
                nombreMes = "Noviembre";
                break;
            case 12:
                nombreMes = "Diciembre";
                break;
        }
        cout <<"El mes correspondiente al numero " <<numeroMes <<" es " <<nombreMes <<"." <<endl;
    } else {
        cout <<"Mes invalido. Debe ingresar un numero entre 1 y 12." <<endl;
    }
    return 0;
}

