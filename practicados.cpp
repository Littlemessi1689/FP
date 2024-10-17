// ConsoleApplication4.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.


// Practica B, Jose Francisco Emmanuel Estrada Mora 
#include <iostream>
#include <cmath>
#include <locale>

using namespace std; 

int main()
{
// 1.1 Codigo para realizar las operaciones 
	cout << "Operacion uno : " << 3 + 5 * 2 / 2 - 1 <<endl; 
	cout << "Operacion dos : " << 3 + 10 / 2 - 1<< endl; 
	cout << "Operacion tres : " << 3 + 5 - 1 << endl; 
	cout << "Operacion cuatro : " << 8 - 1<< endl;
	cout << "Operacion cinco : " << (1.0 / 3) * 3 <<endl; 

	//1.2 Codigo para poner el cuadrado de un numero 
	int elevar; 

	cout << "Introduce el numero a elevar al cuadrado : "; 
	cin >> elevar; 
    cout << "El cuadrado de este numero es : " << elevar * elevar << endl; 
	
	//1.3 Yardas a metros 

	double const valoryardas = 0.9144;
	double yardas;

	cout << "Numero de yardas : "; 
	cin >> yardas; 
	
	cout << "Las yardas en metros son : " << yardas * valoryardas << endl; 

	// 1.4 Depresiacion de un auto 

	double depresiacion = 200000 * 0.80; 
	cout << " la depresacion por año sera : " << depresiacion/5  << "  pesos" << endl;

	// 1.5 deduccion de impuestos 
    
	double parteporcentual = (25000 - 900) * 0.015; 
	double impuestototal = parteporcentual + 900; 
	double sueldoneto = 25000 - impuestototal; 
	cout << "El impuesto total es : " << impuestototal << " pesos" << endl;
	cout << "El sueldo neto es : " << sueldoneto<< " pesos" << endl;

	//1.6 Calculo de operaciones 
	
	//a
	int a = 3 * 4; 
	cout << "3 por 4 = "<< a << endl;

	//b 
	int b = 12 / 3; 
	cout << "12 entre 3= "<< b << endl;

	//c
	int c = 12 % 3; 
	cout << "residuo de 12%3 = " << c << endl; 

	//d
	int d = 12 % 7; 
	cout << "residuo de 12%7 = " << d << endl; 

	//e 
	double e = 3 + 3.0; 
	cout << "3+3.0 = " << e << endl; 

	//f 
	int f = 10 / 100; 
	cout << "10 / 100 = " << f << endl; 

	// g usando pow 
	int g = pow(3, 2); 
	cout << "3 a la 2" << g << endl; 

	// 1.7 Comparaciones
	
	int x = 10; 
	int y = 20; 
	cout << boolalpha; 

	cout << "(x > y) : " << (x > y) << endl;
	cout << "(x<y) : " << (x < y)<<endl ; 
	cout << "(x==y) : " << (x < y)<< endl; 
	cout << "(x!=y) : " << (x != y) <<endl;
	cout << "(x+y) > 100 : " << ((x + y) > 100) << endl; 
	cout << "(x-y) == 0 : " << ((x - y)== 0) << endl; 
	cout << "(x*y) > 500 : " << ((x * y) > 500) << endl; 
	cout << "(x*y) < 100 : " << ((x * y) < 100) << endl;
	cout << "(x-y) < 0 : " << ((x - y) < 0) << endl;
	cout << "(x < 20) : " << (x < 20) << endl;


}

