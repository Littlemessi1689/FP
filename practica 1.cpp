// ConsoleApplication1.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <sstream>
#include <string>
#include <iomanip>
#include <algorithm>
using namespace std;
int main()
{
	//Ejercicio 1.1 numero de materias
	int numerodematerias = 6;
	cout << "Numero de materias que estoy cursando : " << numerodematerias << endl;

	//Ejercicio 1.2 numero de cuentrimestre 
	int cuatrimestre = 4;
	cout << "Cuatrimestre en curso : " << cuatrimestre << endl;

	//Ejercicio 1.3 Variable string, materia 
	string materia = "Fundamentos de programacion ";
	cout << "Materia : " << materia << endl;

	//Ejericio 1.4 Variable string , cuenta
	string cuenta = "335017977";
	cout << "Numero de cuenta : " << cuenta << endl;

	//Ejercicio 1.5 String, nombres propios
	string nombre = "Jose Francisco Emmanuel";
	cout << "Nombre(s) : " << nombre << endl;

	//Ejercicio 1.7 String , apellido ´paterno 
	string ApellidoPaterno = "Estrada";
	cout << "Apellido Paterno : " << ApellidoPaterno << endl;

	//Ejericio 1.12 String, apellido materno 
	string ApellidoMaterno = "Mora";
	cout << "Apellido Materno : " << ApellidoMaterno << endl;

	//Ejercicio 1.8  Variable tipo long, numero de celular 
	long long celular = 5578400637;
	cout << "Numero de celular : " << celular << endl;

	// Ejercicio 1.9	Variable tipo long ; numero de casa 
	long long casa = 8335313495;
	cout << "Numero de casa : " << casa << endl;

	// Ejercicio 1.9  Variable string correo que mas uso 
	string correoQueMasUso = "ejosefranciscoemmanuel@gmail.com";
	cout << "Correo que mas uso : " << correoQueMasUso << endl;

	// Ejercicio 1.10 variable string correo my unitec 
	string correoMyUnitec = "jose.estradaM35@my.unitec.edu.mx"; 
	cout << "Correo my unitec : " << correoMyUnitec << endl; 

	//  Ejercicio 1.11 variable string carrera 
	string carrera = "Ingenieria Mecatronica"; 
	cout << "Carrera : " << carrera << endl; 
	

	//ANALISIS DE ERRORES DE SINTAXIS 

	// 1. EJERCICIO 1 esta mal ya que la variable inicia con un numero o digito, seria correcto poner numero1= 5
	int numero1 = 5; 

	// 2. El ejercicio 2 esta mal ya que su identificador tiene el caracter @ y estso no se pueden usar en identificadores como ! y otros más 
	float valor = 3.1416; 

	// 3. El ejercicio 3 esta mal porque se esta usando double y otra vez doblue como identificador y esta es una palabra reservada es como poner int int=5; debe ser otra y no estas que estan reservadas 
	double ejemplo = 9.81; //  use "ejemplo" como identidficador en vez de double que esta reservada.

	// 4
