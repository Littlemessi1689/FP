// ConsoleApplication2.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
# include <vector>
using namespace std; 
//Clases y objetos clase del 2 de noviembre del 2024 
//Variables globales 
// 
//estructuras / clases 
class Alumno //empieza con mayusucla y los de class son privados y se usa public, encapsulamiento es cunado los datos son privados 
{
public: 
	string nombre; 
	int cuenta;
	// funciones de la estructura 
public: 
	static void altaAlumno(vector<Alumno> &v)// & es un parametro por referencia envia la direccion de memoria donde esta la variable o argumento  

	{
		Alumno alumno;
		cout << "Nombre : "; 
		cin >> alumno.nombre; 
		cout << endl; 
		cout << "Cuenta "; 
		cin >> alumno.cuenta; 
		cout << endl; 
		v.push_back(alumno); 
		//imprimeDatos(alumno); 
	}
	static void imprimeDatos(vector<Alumno> v) //Alumno alumno
	{
		//cout << "Nombre : " << alumno.nombre << endl; cout << "Cuenta : " << alumno.cuenta << endl;
		for (auto elemento : v)
		{
			cout << elemento.nombre << endl; 
			cout << elemento.cuenta << endl;
		}
	}

};

int main()
{
  // clase : atrubutos o propuedaes, vasriables es la estructura o mapa que contiene un objeto 
	//objeto: es una instancia de una clase 
	// el . esz un operador de acceso y los dos : es de referencia al igual de :: 
	
	vector<Alumno> valumno; 
	int numAlumnos; 
	cout << "Cuantos : "; 
	cin >> numAlumnos; 
	for( int i=0; i < numAlumnos; i++)
	{
		Alumno::altaAlumno(valumno); 
	}
	Alumno::imprimeDatos(valumno); 


}


















/*
ALUMNO jose;
jose.nombre = "Jose";
jose.cuenta = 12345;
cout << " Nombre : " << jose.nombre << endl;
cout << " Cuenta : " << jose.cuenta << endl;

ALUMNO Emmanuel;
Emmanuel.nombre = "Emmanuel";
Emmanuel.cuenta = 325678;
cout << " Nombre : " << Emmanuel.nombre << endl;
cout << " Cuenta : " << Emmanuel.cuenta << endl;





class Alumno //empieza con mayusucla y los de class son privados y se usa public, encapsulamiento es cunado los datos son privados
{
public:
	string nombre;
	int cuenta;
	// funciones de la estructura
public:
	static void altaAlumno()

	{
		Alumno alumno;
		cout << "Nombre : ";
		cin >> alumno.nombre;
		cout << endl;
		cout << "Cuenta ";
		cin >> alumno.cuenta;
		cout << endl;
		imprimeDatos(alumno);
	}
	static void imprimeDatos(Alumno alumno)
	{
		cout << "Nombre : " << alumno.nombre << endl;
		cout << "Cuenta : " << alumno.cuenta << endl;
	}

};

int main()
{
  // clase : atrubutos o propuedaes, vasriables es la estructura o mapa que contiene un objeto
	//objeto: es una instancia de una clase
	// el . esz un operador de acceso y los dos : es de referencia al igual de ::
	Alumno::altaAlumno();



}



*/
