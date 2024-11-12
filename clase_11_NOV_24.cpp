// ConsoleApplication1.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std; 
int main()
{
	for (int i = 0; i <= 9;i++)     // eso de i <=9 es un if 
	{
		cout << i << " ,  "; 

	}
	cout << endl; 
	for (int a= 9; a>=0;a--)
	{
		cout << a << " ; "; 
	}
	cout << endl; 

	const int TAMANO = 10;
	int naturales[TAMANO]{ 0,1,2,3,4,5,6,7,8,9 };
	/*cout << naturales[2] << endl;
	naturales[2] = -540;
	cout << naturales[2] << endl;
	for (int i = 0; i < TAMANO; i++)
	{
		cout << naturales[i]; 
	}
	cout << endl;*/
	for (int elemento : naturales) // los : son muy ppoderoso son los operadores de referencia y tambien :: que se usaba en std 
	{
		cout << elemento << " , "; 
	
	}









}


