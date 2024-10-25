// ConsoleApplication1.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <sstream>
#include <string>
#include <iomanip>
#include <algorithm>
#include <locale>
#include <limits>
#include <cmath>
using namespace std; 
int main()
{
	int num1, num2, num3;
	cout << "Ingrese el primer numero ";
	cin >> num1;
	cout << endl;
	cout << "Ingrese el segundo numero ";
	cin >> num2;
	cout << endl;
	cout << "Ingrese el tecer numero ";
	cin >> num3;
	cout << endl;
	
	// 1.16 mostrar 3 numeros e indicar el mayor 
	if (num1 > num2 and  num1> num3)
	{
		cout << "EL numero mayor es :" << num1 << endl; 
	}
	if (num2 > num1 and num2> num3)
	{
		cout << "EL numero mayor es :" << num2 << endl;
	}
	if (num3 > num2 and num3 > num1)
	{
		cout << "EL numero mayor es :" << num3 << endl;
	}
	if (num1== num2 and  num1 != num3)
	{ 
		cout << "El numero mayor es :" << num1; 
	
	} 
	if (num1 == num2 and num1 == num3)
	
	{
		cout << "el numero mayor es : " << num1 << endl; 
	}
	// 1.17  mostrar el maximo y el minimo de 3 numeros 
	int num4, num5, num6; 
	cout << " Ingrese el cuarto  numero "; 
	cin>> num4; 
	cout << endl; 
	cout << " Ingrese el quinto  numero ";
	cin>> num5;
	cout << endl; 
	cout << " Ingrese el sexto numero ";
	cin>> num6;
	cout << endl; 

	if (num4 > num5 and num4 > num6 and num5 >num6 )
	{
		cout << "EL numero mayor es :" << num4 << " Y El numero menor es : " <<num6 << endl;
	}
	if (num4 > num5 and num4 > num6 and num5 == num6)
	{
		cout << "EL numero mayor es :" << num4 << " Y El numero menor es : " << num6 << endl;
	}

	if (num4 > num5 and num4 > num6 and num6 > num5)
	{
		cout << "EL numero mayor es :" << num4 << "  Y El numero menor es : " << num5 << endl;
	}
	if (num4 > num5 and num4 > num6 and num6 == num5)
	{
		cout << "EL numero mayor es :" << num4 << "  Y El numero menor es : " << num5 << endl;
	}

    if (num5 > num4 and num5 > num6 and num6 > num4)
	{
		cout << "EL numero mayor es :" << num5 << " Y El numero minimo es : "<< num4 << endl;
	}
	if (num5 > num4 and num5 > num6 and num6 == num4)
	{
		cout << "EL numero mayor es :" << num5 << " Y El numero minimo es : " << num4 << endl;
	}


	if (num5 > num4 and num5 > num6 and num4 > num6)
	{
		cout << "EL numero mayor es :" << num5 << " Y El numero minimo es : " << num6 << endl;
	}
	if (num5 > num4 and num5 > num6 and num4 == num6)
	{
		cout << "EL numero mayor es :" << num5 << " Y El numero minimo es : " << num6 << endl;
	}

	if (num6 > num5 and num6 > num4 and num4> num5)
	{
		cout << "EL numero mayor es :" << num6 << " Y el numero menor es :"<< num5 << endl;
	}
	if (num6 > num5 and num6 > num4 and num4 == num5)
	{
		cout << "EL numero mayor es :" << num6 << " Y el numero menor es :" << num5 << endl;
	}

	if (num6 > num5 and num6 > num4 and num5 > num4)
	{
		cout << "EL numero mayor es :" << num6 << " Y el numero menor es :" << num4 << endl;
	}
	if (num6 > num5 and num6 > num4 and num5 == num4)
	{
		cout << "EL numero mayor es :" << num6 << " Y el numero menor es :" << num4 << endl;
	}
    if (num4 == num5 and num4 != num6 and num6 >num4)
	{
		cout << "El numero mayor es :" << num4 << " Y el numero menor es : " << num4 << endl; 

	}
	if (num4 == num5 and num4 != num6 and num6 < num4)
	{
		cout << "El numero mayor es :" << num4 << " Y el numero menor es : " << num6 << endl;

	}
	if (num6 == num5 and num6 != num4 and num6<num4)
	{
		cout << "El numero mayor es :" << num6 << " Y el numero menor es : " << num6 << endl;

	}
	if (num6 == num5 and num6 != num4 and num6 > num4)
	{
		cout << "El numero mayor es :" << num6 << " Y el numero menor es : " << num4 << endl;

	}

	if (num4 == num5 and num4 == num6)

	{
		cout << "el numero mayor es : " << num4 << " y el minimo es :  "<< num4  << endl;
	}
	// Programa que leea las horas 
	int horas, minutos, segundos; 
	cout << "Introdusca las horas"; 
	cin >> horas;
	cout << endl; 
	cout << "Introdusca los minutos";
	cin >> minutos;
	cout << endl;
	cout << "Introdusca los segundos";
	cin >> segundos ;
	cout << endl;
	if (segundos== 59 )
	{
		segundos = 00; 
		minutos = minutos +1; 
	     
		
		
		cout << "LA FEHCA ES : " << horas << " horas con  " << minutos << " minutos y " << segundos << " segundos"  << endl;
	}
	if (minutos== 59 and segundos ==59)
	{
		
		horas = horas + 1;



		cout << "LA FEHCA ES : " << horas << " horas con  " << minutos << " minutos y "  << segundos << "segundos" << endl;
	}
	if (horas== 23  and minutos == 59  and segundos == 59)
	{

		horas = horas+1;
		minutos = minutos -59;
		segundos = segundos -59; 



		cout << "LA FEHCA ES : " << horas << " horas con  " << minutos << " minutos y " << segundos << "segundos" << endl;
	}
	if (horas == 24 and minutos == 0 and segundos == 0)
	{

		horas = horas - 24;
		minutos = minutos;
		segundos = segundos;

		cout << "LA FEHCA ES : " << horas << " horas con  " << minutos << " minutos y " << segundos << "segundos" << endl;

	}	
}
	

