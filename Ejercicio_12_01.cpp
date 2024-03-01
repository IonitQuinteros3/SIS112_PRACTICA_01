// Materia: Programación I, Paralelo 4

// Autor: Ionit Maya Quinteros Perez

// Fecha cr/eación: 26/02/2024

// Fecha modificación: 26/02/2024

// Número de ejericio: 12

// Problema planteado: Leer un número entero que represente un valor en segundos y convierta en: horas, minutos y segundos.

#include <iostream>
using namespace std;

int main() {
    int segundos, minutos, horas;
	cout <<"Ingrese un valor en segundos: ";
	cin>> segundos;

    minutos = segundos / 60;
    segundos %= 60;
    horas = minutos / 60;
    minutos %= 60;

    cout <<"Horas: " <<horas <<endl;
    cout <<"Minutos: " <<minutos <<endl;
	cout <<"Segundos: " <<segundos <<endl;
    return 0;
}
