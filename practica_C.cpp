// ConsoleApplication1.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>

using namespace std; 
int main()
{
	// Ejercicio 1.1 El cadrado de un numero 

	int numero;
	cout << "Ingrese el numero : ";
	cin >> numero;
	cout << endl;
	cout << "El cuadrado del numero es : " << (numero * numero) << endl;


	// Ejercicio 1.2 numero multiplicado por 1,2,3,4,5,

	int por5;
	cout << "Ingrese el numero a multiplicar : ";
	cin >> por5;
	cout << endl;
	cout << "El numero multiplicado por 1,2,3,4,5 son los que se mostraran debajo : " << endl;
	cout << "numero por 1: " << (por5 * 1) << endl;
	cout << "numero por 2: " << (por5 * 2) << endl;
	cout << "numero por 3: " << (por5 * 3) << endl;
	cout << "numero por 4: " << (por5 * 4) << endl;
	cout << "numero por 5: " << (por5 * 5) << endl;


	//1.3 Convertir kg a libras 

	double kilogramos;
	cout << "Ingrese el peso en kilogramos : ";
	cin >> kilogramos;
	cout << endl;
	cout << "El peso en libras es : " << (kilogramos * 2.2);

	//1.4 Total y promedio de 3 numeros 

	double n1, n2, n3;
	double total = n1 + n2 + n3;
	double promedio = ((n1 + n2 + n3) / 3);


	cout << "Ingrese el primer numero :  ";
	cin >> n1;
	cout << endl; 
	cout << "Ingrese el segundo numero : "; 
	cin >> n2;
	cout << endl; 
	cout << "Ingrese el tecer numero : ";
	cin >> n3;
	cout << endl; 
	cout << total<< endl;
	cout << promedio << endl; 



              


}



