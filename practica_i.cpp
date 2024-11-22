// ConsoleApplication2.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std; 
int main()
{
    const int TAMANO = 10; 
    int arreglo[TAMANO]; 
    // 1 arreglo de 10 elementos aleatorios
    srand(time(NULL)); 
    for (int i=0; i<=9 ;i++)
    {
        arreglo[i] = rand() % 101; 
    }
    for (int elemento : arreglo)
    {
        cout << elemento << " ; "; 
    }
    cout << endl; 

}

