#include <iostream>
#include <cmath>
using namespace std;

// Prototipos de funciones
void menu();
void areaCuadrado();
void areaRectangulo();
void areaCirculo();
void areaTriangulo();
void areaRombo();

int main() {
    int opcion;
    do {
        menu();
        cout << "Selecciona una opcion : ";
        cin >> opcion;

        switch (opcion) {
        case 1: areaCuadrado(); break;
        case 2: areaRectangulo(); break;
        case 3: areaCirculo(); break;
        case 4: areaTriangulo(); break;
        case 5: areaRombo(); break;
        case 6: cout << " Fin "<< endl; break;
        default: cout << "Opcion no valida "<< endl;
        }
    } while (opcion != 6);

    
}

// Menú principal
void menu() {
    cout << endl; 
    cout << " Menu de Areas" << endl; 
    cout << "1. Area de un cuadrado" << endl;
    cout << "2. Area de un rectangulo"<< endl;
    cout << "3. Area de un circulo"<< endl;
    cout << "4. Area de un triangulo"<< endl;
    cout << "5. Area de un rombo" << endl;
    cout << "6. Salir"<< endl;
}

// Definición de funciones

void areaCuadrado() {
    double lado;
    cout << "Ingresa el lado del cuadrado: ";
    cin >> lado;
    cout << "El area del cuadrado es: " << lado * lado << endl;
}

void areaRectangulo() {
    double base, altura;
    cout << "Ingresa la base del rectangulo: ";
    cin >> base;
    cout << "Ingresa la altura del rectangulo: ";
    cin >> altura;
    cout << "El area del rectangulo es: " << base * altura << endl;
}

void areaCirculo() {
    double radio;
    const double pi = 3.14159265359; // Valor aproximado de π
    cout << "Ingresa el radio del circulo: ";
    cin >> radio;
    cout << "El area del circulo es: " << pi * radio * radio << endl;
}

void areaTriangulo() {
    double base, altura;
    cout << "Ingresa la base del triangulo: ";
    cin >> base;
    cout << "Ingresa la altura del triangulo: ";
    cin >> altura;
    cout << "El area del triangulo es: " << (base * altura) / 2 << endl;
}

void areaRombo() {
    double diagonalMayor, diagonalMenor;
    cout << "Ingresa la diagonal mayor del rombo: ";
    cin >> diagonalMayor;
    cout << "Ingresa la diagonal menor del rombo: ";
    cin >> diagonalMenor;
    cout << "El area del rombo es: " << (diagonalMayor * diagonalMenor) / 2 << endl;
}
