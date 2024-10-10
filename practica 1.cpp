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
	float valor = 3.1416f; 

	// 3. El ejercicio 3 esta mal porque se esta usando double y otra vez doblue como identificador y esta es una palabra reservada es como poner int int=5; debe ser otra y no estas que estan reservadas 
	double ejemplo = 9.81; //  use "ejemplo" como identidficador en vez de double que esta reservada.

	// 4 El ejercio 4 esta mal poruqe son dos caracteres y se estan usando char se podria usar mejor string y comilla normales 
	char ejemplo2 = 'B';   //aqui ya no hay error de sintaxis 

	//6 El ejercicio 6 esta mal porque se esta usando int (que significa entero) y hay un decimal, no se esta usando la funcion correcta que seria float o double 
	int ejemplo3 = 10; // si se quiere mantener el valor sería 
	double numero = 10.5;

	//7 El ejercicio 7 esta mal porque se estan usando comillas simples 
	string ejemplo4 = "Juan";

	//8 El ejercicio 8 esta mal porque se quiere asignar int a una constante con punto decimal, debe de ser con float o doblue
	const float pi = 3.14f;

	//9 Este noveno ejercicio este mal porque no tiene con que sumarlo podria ser otro numero u otra variable con un valor asignado  
	int suma = 5 +6 ;

	//10 Este esta mal porque en la segunda parte no incluye un punto y coma
	int ejemplo5;
	ejemplo5 = 10;
	
	// 11 este ejercicio 11 esta mal porque int usa valores enteros, debe de ser 10, o si se quiere poner "díez" se deberia usar string 
	int ejemplo6= 10; 
	//o tambien
	string ejemplo7 = "diez"; 
	
	// 12 Este ejercicio 12 esta mal se usa "." para separar decimal
	float altura = 1.75; 

	// 13 Este ejercicio esta mal poruqe se usan " y no simples '
	char inicial = 'J'; 

	// 15 El ejercicio 15 esta mal porque no lleva comillas (")
	string apellido2= "Juan";

	//16 Este ejercicio 16 esta mal porque falta la segunda variable o caracter 
	int resultado = 5 * ejemplo6; 

	// 18 Ejercicio 18 esta mal pues falta el ; al final 
	int edad = 25; 

    // 19 Este ejercicio esta bien porque se puede poner la f para indicar que es un float
	float peso = 70.5f;
	
	//20 Este le hace falta el punto y coma al final 
	int suma1= 10 + 20; 

	

}


	

