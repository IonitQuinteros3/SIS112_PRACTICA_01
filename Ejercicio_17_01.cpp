// Materia: Programación I, Paralelo 4

// Autor: Ionit Maya Quinteros Perez 

// Fecha creación: 27/02/2024

// Fecha modificación: 27/02/2024

// Número de ejericio: 17

// Problema planteado: En una fábrica de computadoras se planea ofrecer a los clientes un descuento que dependerá del número de computadoras que compre. 
//Si las computadoras son menos de cinco se les dará un 10% de descuento sobre el total de la compra; si el número de computadoras es mayor o igual a cinco 
//pero menos de diez se le otorga un 20% de descuento; y si son 10 o más se les da un 40% de descuento. 
// El precio de cada computadora es un valor que el usuario ingrese desde el teclado. 
#include <iostream>
using namespace std;
int main() {
    double precioComputadora;
    int cantidad;
    const double descuento10 = 0.1;
    const double descuento20 = 0.2;
    const double descuento40 = 0.4;
	cout <<"Ingrese el precio de una computadora: ";
    cin>> precioComputadora;
    cout <<"Ingrese la cantidad de computadoras: ";
    cin>> cantidad;

    // Calcula el total a pagar sin descuento
    double total = precioComputadora * cantidad;

    // Calcula el descuento segun la cantidad de computadoras
    if (cantidad < 5) {
        total = total * (1 - descuento10);
    } else if (cantidad < 10) {
        total = total * (1 - descuento20);
    } else {
        total =total * (1 - descuento40);
    }
    cout << "Total a pagar con descuento: " <<total <<endl;
    return 0;
}
