// ConsoleApplication1.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>

using namespace std; 
int main()
{

	int n1, n2; 
	cout << "n1 : "; 
		cin >> n1;
		cout << endl;
		cout << "n2 : ";
	cin >> n2;
	cout << endl;
	if (n1 > n2)
	{
		cout << "n1 mayor " << endl; 






	}else 
	 
	{
		cout << "n2 mayor" << endl; 

	}
	int edad; 
	cout << "edad : "; 
	cin >> edad; 
	cout << endl; 
	if (edad >= 18)
	{
		cout << " mayor de edad" << endl; 


	}
	else
	{
		cout << "menor de edad" << endl; 


	}
	int  temp; 
	cout << "temp : "; 
	cin >> temp; 
	cout << endl; 
	if (temp < 10)

	{
		cout << "Mucho frio " << endl; 

	}
	if (temp >=10 and temp <17) 
	{
		cout << "Hace frio" << endl; 
		



	}
	if (temp >= 17)     // se pudo poner else 
	{
		cout << "temperatura templado" << endl; 
	
	}
	char voto = ' ';  // o simplemente poner : char voto;  
	cout << "Ingresa a favor o en contra de la paz : "; 
	cin >> voto; 
	cout << endl; 
	if (voto == 'S' or voto== 'n')
	{
		cout << "Voto valido "; 

	
	
	}else
	{
		cout << "Voto invalido ";
	
	
	}
	
}

