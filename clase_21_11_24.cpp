// ConsoleApplication1.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <vector>
using namespace std; 

int main()
{
	
	vector <int> nombrevector{ 1,2,3,4,5 }; 
	cout << nombrevector.size() << endl; 
	for (int i=0; i< nombrevector.size();i++)          // v.size() es una funcion 
	{
		cout << nombrevector[i]  ; 
	}
    // para añadir elelemtos 
	cout << endl; 
	vector<int> v; 
	int num=-1; 
	while (num!=0)
	{
		cout << "dame un elemento"; 
		cin >> num; 
		if (num !=0 )
		{
			v.push_back(num);
		}
		
	}
	for (int contador : v)          // v.size() es una funcion 
	{
		cout << v[contador];
	}


}


