// ConsoleApplication1.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <string>
using namespace std;
int main()
{
	// parctica E Jose Francisco Emmanuel Estrada Mora 

	//1.21 do while Ciclo do while 
	string salir;
	do
	{
		cout << "Desea salir del menu (SI/NO) ? " << endl;
		cin >> salir;
	} while (salir != "SI");


	//1.22 Hacer claculadora de operaciones aritemticas basicas 
	string opciondeoperacion; 
	int numero1, numero2, total; 

	do {
		cout << "Menu de operaciones " << endl;
		cout << endl; 
	
		cout << "a) Suma de dos operandos" << endl; 
		cout << "b) resta de dos operandos" << endl;
		cout << "c) multiplicacion de dos operandos" << endl;
		cout << "d) division de dos operandos" << endl;
		cout << "e) residuo de dos operandos" << endl;
		cout << "s) salir del menu " << endl;
		cout << endl; 
		cout << "Seleccione una opcion "; 
		cin >> opciondeoperacion; 
		
		if (opciondeoperacion != "s")
		{
			cout << "Ingrese el primer numero : "; 
			cin >> numero1; 
			cout << "Ingrese el segundo numero : "; 
			cin >> numero2; 
		}
		if (opciondeoperacion == "a")
		{
			total = numero1 + numero2; 
			cout << "La suma de los numeros es : " << total << endl; 
		 
		}
		if (opciondeoperacion == "b")
		{
			total = numero1 - numero2;
			cout << "La resta de los numeros es : " << total << endl;

		}
		if (opciondeoperacion == "c")
		{
			total = numero1 * numero2;
			cout << "La multiplicacion de los numeros es : " << total << endl;

		}
		if (opciondeoperacion == "d" and numero2 !=0 )
		{
			total = numero1 / numero2;
			cout << "division de los numeros es : " << total << endl;

		}
		if (opciondeoperacion == "e" and numero2 != 0)
		{
			total = numero1 % numero2; 
			cout << "El residuo de los numero es : " << total << endl; 
		} 
		
		numero1 = 0, numero2 = 0, total = 0; 
	} while (opciondeoperacion != "s"); 

	// 1.23 Simulacion de cajero 
	double saldo = 3450; 
	int pin = 1234; 
	cout << "Ingrese su pin de 4 digitos por favor "; 
	cin >> pin; 
	do
	{
		if (pin != 1234)
		{
			cout << "El pin es incorrecto "; 
				break; 
		}
		if (pin == 1234)
			cout << "pin correcto" << endl; 

	} while (pin != 1234); 
	
	char opcioncajero; 
	
	do
	{
		cout << "Menu de cajero de operaciones unitec" << endl; 
		cout << "a) consulta de saldo " << endl; 
		cout << "b) retiro de dinero " << endl; 
		cout << "c) canelar operacion " << endl; 
		cout << "Escoja una opcion "; 
		cin >> opcioncajero; 
		if (opcioncajero == 'a')
		{
			cout << "Su saldo es 3450.00 pesos ";
			break; 
		}
		if (opcioncajero == 'b')
		{
			double cantidadretiro; 
			cout << "Su saldo es de 3450.00 pesos por favor elija la cantidad a retirar "; 
			cin >> cantidadretiro; 
			if (cantidadretiro> saldo)
			{
				cout << "fondos insuficientes"; 
				break; 
			
			}
			if (cantidadretiro <= saldo)
			{
				cout << "A retirado exitosamente " << cantidadretiro << "pesos, su saldo restante es de : " << saldo - cantidadretiro << "pesos"; 
				break; 
			}

		}

	} while (opcioncajero != 'c');
	

		


	







}


