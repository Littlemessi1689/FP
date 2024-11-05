// ConsoleApplication1.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <string>
using namespace std; 
int main()
{
	//	Menu 
	int opcion1 = 0;
	do
	{
		cout << "Menu opciones " << endl;
		cout << "opcion 1 " << endl;
		cout << "opcion 2 " << endl;
		cout << "opcion 3 " << endl;
		cout << "opcion 4 " << endl;
		cout << "6.- salir del menu " << endl;
		cin >> opcion1;

	} while (opcion1 != 6);

	cout << endl; 



	// parctica E 

	//1.21 do while Ciclo do while 
	string salir;
	do 
	{
		cout << "Desea salir del menu? " << endl; 
		cin >> salir; 
	}while (salir != "SI");



}
