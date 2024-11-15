/ ConsoleApplication1.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//



//Practica G José Francisco Emmanuel Estrada Mora 
#include <iostream>
using namespace std; 
int main()
{
	string nombreMes[12]{ "Enero","Febrero" , "Marzo", "Abril", "Mayo", "Junio", "Julio", "Agosto", "Septiembre", "Octubre", "Noviembre", "Diciembre" }; // ejercicio 1
	//ejercicio 2
	cout << "Meses : ";
	for (int i = 0; i < 12; i++)
	{
		cout << nombreMes[i] << " ; "; 
	}
	cout << endl; 
	
	//ejercicio 3

	string nombrePlaneta [8]{ "Mercurio", "Venus", "Tierra", "Marte", "Jupiter", "Saturno", "Urano", "Neptuno"};
	//ejercicio 4
	cout << "Planetas del sistema solar : "; 
	for (int i = 0; i < 8; i++)
	{
		cout << nombrePlaneta[i] << " ; "; 
	}
	cout << endl; 
}

