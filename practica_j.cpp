// ConsoleApplication9.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//
// 
// 
//  Practica J Jose Francisco Emmanuel Estrada Mora 
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    const int TAMANO = 10;
    int arreglo[TAMANO];
    // 1 arreglo de 10 elementos aleatorios
    srand(time(NULL));
    for (int i = 0; i <= 9; i++)
    {
        arreglo[i] = rand() % 101;
    }
    for (int elemento : arreglo)
    {
        cout << elemento << " ; ";
    }
    cout << endl;


    // Ejercicio 1 Solicitar un numero y multiplicar por 10 

    vector<int> v;
   
    int n = -1;
    while (n != 0)
    {
        cout << "Dame un numero ";
        cin >> n;
        if (n == 0)
        {
            break;
        }
        v.push_back(n * 10);

    }
    for (int elemento : v) {
        cout << elemento << " ; ";

    }
    cout << endl;

    // ejercicio 2 mostrar el elemento mayor de un arreglo 
    int valormayor = arreglo[0];
    for (int i = 0; i < 10; i++)
    {
        if (arreglo[i] > valormayor)
        {
            valormayor = arreglo[i];
        }

    }
    cout << "El valor mayor es : " << valormayor << endl;

    // Calcular el promedio del  arreglo 
    int suma = 0;
    for (int i = 0; i < 10; i++)
    {
        suma = arreglo[i] + suma;
    }
    cout << "El promedio de los valores del arreglo es : " << suma / 10 << endl;

    // Encontrar el segundo elemento mayor de un arreglo 
    int valormayors = arreglo[0];
    int segundovalormayor = -2;
    for (int i = 0; i < 10; i++)
    {
        if (arreglo[i] > valormayors)
        {
            segundovalormayor = valormayors;
            valormayors = arreglo[i];
        }if (arreglo[i] > segundovalormayor and arreglo[i] != valormayors)
        {
            segundovalormayor = arreglo[i];
        }

    }
    cout << "El segundo valor mayor es : " << segundovalormayor << endl;
    // contar los elementos pares e impares de  un arreglo 

    cout << "numeros pares : ";
    for (int i = 0; i < 10; i++)
    {
        if (arreglo[i] % 2 == 0)
        {
            cout << arreglo[i] << " , ";
        }
    }
    cout << endl;
    cout << "Numeros impares : ";
    for (int i = 0; i < 10; i++)
    {
        if (arreglo[i] % 2 != 0)
        {
            cout << arreglo[i] << " , ";
        }
    }
    cout << endl;
    // Mostrar la tabla de multiplicar de un numero 
    int tablas[10] = { 1,2,3,4,5,6,7,8,9,10 };
    int numero2;
    cout << "introduce el numero a multiplicar : ";
    cin >> numero2;
    cout << "Las tablas de multiplicar del 1 al 10 del numero son : ";

    for (int i = 0; i <= 9; i++)
    {
        cout << numero2 * tablas[i] << " ; ";
    }

    // Encontra los tres mayores de un arreglo de 1000 valores 
    const int TAMANO2 = 1000;
    int arreglo2[TAMANO2];
    // 1 arreglo de 10 elementos aleatorios
    srand(time(NULL));
    for (int i = 0; i <= 9; i++)
    {
        arreglo2[i] = rand() % 101;
    }

    cout << endl;
    int mayor3 = arreglo2[0];
    int segundoMayor3 = arreglo2[0];
    int tercerMayor3 = arreglo2[0];

    for (int i = 0; i < TAMANO; i++) {
        if (arreglo2[i] > mayor3) {
            tercerMayor3 = segundoMayor3;
            segundoMayor3 = mayor3;
            mayor3 = arreglo2[i];
        }
        if (arreglo2[i] > segundoMayor3 and arreglo2[i] != mayor3) {
            tercerMayor3 = segundoMayor3;
            segundoMayor3 = arreglo2[i];
        }
        if (arreglo2[i] > tercerMayor3 and arreglo2[i] != segundoMayor3 and arreglo2[i]< segundoMayor3) {
            tercerMayor3 = arreglo[i];
        }

    }
    cout << "Los tres mayores elementos son: " << mayor3 << ", " << segundoMayor3 << ", " << tercerMayor3 << endl;


    // programa encuentre el segundo menor elemento 
    const int TAMANO3 = 1000;
    double arreglo3[TAMANO3];
    // 1 arreglo de 10 elementos aleatorios
    srand(time(NULL));
    for (int i = 0; i <= 9; i++)
    {
        arreglo3[i] = rand() % 101;
    }

    cout << endl;
    double menor = arreglo3[0];
    double segundomenor = arreglo3[0];
    for (int i = 0; i < TAMANO3; i++)
    {
        if (arreglo3[i] < menor)
        {
            segundomenor = menor;
            menor = arreglo3[i];

        }if (arreglo3[i] < segundomenor and arreglo3[i] != menor and arreglo3[i])
        {
            segundomenor = arreglo3[i];
        }

    }
    cout << "El segundo menor es : " << segundomenor << endl;

    // Programa que invierta los valores de un arreglo 
    cout << "Arreglo original : ";
    const int TAMANO4 = 10;
    int arreglo4[TAMANO4];
    // 1 arreglo de 10 elementos aleatorios
    srand(time(NULL));
    for (int i = 0; i <= 9; i++)
    {
        arreglo4[i] = rand() % 101;
    }
    for (int elemento : arreglo4)
    {
        cout << elemento << " ; ";
    }
    cout << endl;
    cout << "Arreglo invertido : ";
    for (int i = 9; i >= 0; i--)
    {
        cout << arreglo4[i] << " ; ";
    }

}
