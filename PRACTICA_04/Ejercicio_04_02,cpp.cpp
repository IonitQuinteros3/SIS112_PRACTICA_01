// Materia: Programación I, Paralelo 4

// Autor: Ionit Maya Quinteros Perez

// Fecha creación: 09/04/2024

// Fecha modificación: 11/04/2024

// Numero de ejericio: 2

// Problema planteado:Ingresar el tamaño de un vector de más de 5 elementos y llenar con número aleatorios entre 1 y 1000, desplegar el vector original y luego ordenarlo con los siguientes métodos.
//Ordenar por selección.
//Ordenar por inserción.
//Ordenar por el método burbuja.
//Ordenar por Shell.
//Ordenar por Quicksort.

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

// Función para imprimir un vector
void imprimirVector(const std::vector<int>& vec)
 {
    for (int num : vec)
	{
        cout << num << " ";
    }
    cout << std::endl;
}

// Función para ordenar un vector utilizando el método de selección
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



// Función para ordenar un vector utilizando el método de burbuja
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

// Función para ordenar un vector utilizando el método de Shell
void ordenarShell(vector<int>& vec) 


// Función para ordenar un vector utilizando el método de Quicksort
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
    // Semilla para la generación de números aleatorios
    srand(time(nullptr));

    int tamano;
    std::cout << "Ingrese el tamaño del vector (mayor que 5): ";
    std::cin >> tamano;

    if (tamano <= 5) {
        cout << "El tamaño del vector debe ser mayor que 5." << endl;
        return 1;
    }

    vector<int> vec(tamano);

    // Llenar el vector con números aleatorios entre 1 y 1000
    for (int i = 0; i < tamano; i++) {
        vec[i] = rand() % 1000 + 1;
    }

    cout << "Vector original: ";
    imprimirVector(vec);

    // Ordenar el vector utilizando diferentes métodos de ordenamiento
    vector<int> vecSeleccion = vec;
    ordenarSeleccion(vecSeleccion);
    cout << "Ordenado por selección: ";
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



