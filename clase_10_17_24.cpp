// ConsoleApplication1.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;
int main()
{
 //Operadores logicos
    cout << boolalpha; 
    bool p = true, q = false; 
    //1  Conector logico and
    cout << "p and q : " << (p and q) << endl; 
    
    // 2 conector lodico or 
    cout << "p or q : " << (p or q) << endl;

    // 3 logico not 
    cout << "not p : " << (not(p)) << endl;

    //4 Cominacion de and y not 
    cout << "(p and not(q)) : " << (p and not (q)) << endl;

    //5 double not 
    cout << "not(not(q))) : " << not(not(q)) << endl; 

    //6 Operaciones mixtas 
    cout << "(not(p and q) or (p or not (q))) : " << (not(p and q) or (p or not (q))) << endl; 

    //7 Asignacion de variables con operadores logicos 
    bool a = p and q;
    cout << "Valor asignado a la variable a " << a << endl; 

    // 8 Operaciones logicas con números enteros 
    int x = 5, y = 0; 
    cout << "(x and y) : " << (x and y) << endl; 

    //9 Operaciones logicas con tipos de numeros reales 
    float m = 3.5, n= 0.0; 
    cout << "(m or n ): " << (m or n) << endl; 

    // 10 Expresiones anidadas 
    cout << "((x and not(y)) and (m or not (q))): " << ((x and not(y)) and (m or not (q))) << endl; 

    //11 Uso de operadores logicos con comparacion de cadenas de texto (string) 

    string str1 = "Hola"; 
    string str2 = "Mundo "; 
    cout << (str1 == str2) << endl; 
    cout << (str1 != str2) << endl; 
    cout << ((str1 != "") and (str2 != "") ) << endl; //caracter vacio












     
}


