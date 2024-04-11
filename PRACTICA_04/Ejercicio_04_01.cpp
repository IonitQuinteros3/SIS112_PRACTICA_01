// Materia: Programaci�n I, Paralelo 4

// Autor: Ionit Maya Quinteros Perez

// Fecha creaci�n: 09/04/2024

// Fecha modificaci�n: 11/04/2024

// Numero de ejericio: 1

// Problema planteado:Ingresar dos numeros enteros y hallar al mcd mediante el algoritmo de euclides.

#include <iostream>

using namespace std;

// Funci�n para encontrar el MCD utilizando el algoritmo de Euclides
int encontrarMCD(int a, int b) 
{
    while (b != 0) 
	 {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() 
{
    int num1, num2;

    // Pedir dos n�meros enteros
    cout << "Ingrese el primer n�mero entero: ";
    cin >> num1;
    cout << "Ingrese el segundo n�mero entero: ";
    cin >> num2;

    // m�nimo com�n divisor utilizando el algoritmo de Euclides
    int mcd = encontrarMCD(num1, num2);

    // Mostrar el resultado
    cout << "El m�nimo com�n divisor de " << num1 << " y " << num2 << " es: " << mcd << endl;

    return 0;
}

