// ConsoleApplication1.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <vector>
using namespace std; 
int main()
{
	vector<int> v; 
 // EJERCICIO 1  por maestro
	int n = -1; 
	while (n !=0)
	{
		cout << "Dame un numero ";
			cin >> n; 
			if (n ==0)
			{
				break; 
			}
			v.push_back(n * 10); 

	}
	for (int elemento : v) {
		cout << elemento << " ; "; 

	}
	cout << endl;

	//6 Cuente el numero de pares e impares 
	vector <int> pares; 
	vector<int> impares; 
	int numero[10]{ 34,23,94,53,16,27,5,25,42,82 }; 
	int p = 0, impar = 0; 
	for (int i = 0; i <= 9; i++) {

		if(i%2 ==0)
		{
			p++; 
			pares.push_back(numero [i]); 
		}   
		else
		{ 
			impar++;
			impares.push_back(numero[i]);

		
		}


	}
	for (int elemento : pares)
	{
		cout << elemento << endl; 
	}
	for (int elemento : impares)
	{
		cout << elemento;
	}

	// El ejercicio 8 "Encuentre los 3 numeros mayores 
	int numeros[10]{ 34,23,94,53,16,27,5,25,42,82 };

	int primero, segundo, tercero, tempora = 0; 
	primero = numeros[0];
	segundo = numeros[1]; 
	tercero = numeros[2]; 


	
}
