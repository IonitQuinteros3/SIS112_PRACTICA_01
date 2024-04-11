// Materia: Programaci�n I, Paralelo 4

// Autor: Ionit Maya Quinteros Perez

// Fecha creaci�n: 09/04/2024

// Fecha modificaci�n: 11/04/2024

// Numero de ejericio: 2

// Problema planteado:Ingresar el tama�o de un vector de m�s de 5 elementos y llenar con n�mero aleatorios entre 1 y 1000, desplegar el vector original y luego ordenarlo con los siguientes m�todos.
//Ordenar por selecci�n.
//Ordenar por inserci�n.
//Ordenar por el m�todo burbuja.
//Ordenar por Shell.
//Ordenar por Quicksort.

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

// Funci�n para imprimir un vector
void imprimirVector(const std::vector<int>& vec)
 {
    for (int num : vec)
	{
        cout << num << " ";
    }
    cout << std::endl;
}

// Funci�n para ordenar un vector utilizando el m�todo de selecci�n
void ordenarSeleccion(vector<int>& vec)
 {
    int n = vec.size();
    for (int i = 0; i < n - 1; ++i) 
	{
        int min_id = i;
        for (int j = i + 1; j < n; ++j) 
		{
            if (vec[j] < vec[min_id])
			{
                min_id = j;
            }
        }
        swap(vec[i], vec[min_id]);
    }
}



// Funci�n para ordenar un vector utilizando el m�todo de burbuja
void ordenarBurbuja(vector<int>& vec) 
{
    int n = vec.size();
    for (int i = 0; i < n - 1; ++i) 
	{
        for (int j = 0; j < n - i - 1; ++j) 
		{
            if (vec[j] > vec[j + 1]) 
			{
                swap(vec[j], vec[j + 1]);
            }
        }
    }
}

// Funci�n para ordenar un vector utilizando el m�todo de Shell
void ordenarShell(vector<int>& vec) 


// Funci�n para ordenar un vector utilizando el m�todo de Quicksort
int particionar(vector<int>& vec, int low, int high) {
    int pivot = vec[high];
    int i = low - 1;
    for (int j = low; j <= high - 1; ++j) {
        if (vec[j] < pivot) {
            ++i;
            swap(vec[i], vec[j]);
        }
    }
    swap(vec[i + 1], vec[high]);
    return i + 1;
}

void ordenarQuicksort(vector<int>& vec, int low, int high) {
    if (low < high) {
        int pi = particionar(vec, low, high);
        ordenarQuicksort(vec, low, pi - 1);
        ordenarQuicksort(vec, pi + 1, high);
    }
}

int main() {
    // Semilla para la generaci�n de n�meros aleatorios
    srand(time(nullptr));

    int tamano;
    std::cout << "Ingrese el tama�o del vector (mayor que 5): ";
    std::cin >> tamano;

    if (tamano <= 5) {
        cout << "El tama�o del vector debe ser mayor que 5." << endl;
        return 1;
    }

    vector<int> vec(tamano);

    // Llenar el vector con n�meros aleatorios entre 1 y 1000
    for (int i = 0; i < tamano; i++) {
        vec[i] = rand() % 1000 + 1;
    }

    cout << "Vector original: ";
    imprimirVector(vec);

    // Ordenar el vector utilizando diferentes m�todos de ordenamiento
    vector<int> vecSeleccion = vec;
    ordenarSeleccion(vecSeleccion);
    cout << "Ordenado por selecci�n: ";
    imprimirVector(vecSeleccion);

    vector<int> vecBurbuja = vec;
    ordenarBurbuja(vecBurbuja);
    cout << "Ordenado por burbuja: ";
    imprimirVector(vecBurbuja);


    vector<int> vecQuicksort = vec;
    ordenarQuicksort(vecQuicksort, 0, tamano - 1);
    cout << "Ordenado por Quicksort: ";
    imprimirVector(vecQuicksort);

    return 0;
}



