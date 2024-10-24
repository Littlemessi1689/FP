// ConsoleApplication1.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>

using namespace std;
int main()
{
	//Practica C Jose Francisco Emmanuel Estrada Mora 
	// Ejercicio 1.1 El cadrado de un numero 

	int numero;
	cout << "Ingrese el numero : ";
	cin >> numero;
	cout << endl;
	cout << "El cuadrado del numero es : " << (numero * numero) << endl;


	// Ejercicio 1.2 numero multiplicado por 1,2,3,4,5,

	int por5;
	cout << "Ingrese el numero a multiplicar : ";
	cin >> por5;
	cout << endl;
	cout << "El numero multiplicado por 1,2,3,4,5 son los que se mostraran debajo : " << endl;
	cout << "numero por 1: " << (por5 * 1) << endl;
	cout << "numero por 2: " << (por5 * 2) << endl;
	cout << "numero por 3: " << (por5 * 3) << endl;
	cout << "numero por 4: " << (por5 * 4) << endl;
	cout << "numero por 5: " << (por5 * 5) << endl;


	//1.3 Convertir kg a libras 

	double kilogramos;
	cout << "Ingrese el peso en kilogramos : ";
	cin >> kilogramos;
	cout << endl;
	cout << "El peso en libras es : " << (kilogramos * 2.2) << endl; 

	//1.4 Total y promedio de 3 numeros 

	double n1, n2, n3;
	


	cout << "Ingrese el primer numero :  ";
	cin >> n1;
	cout << endl;
	cout << "Ingrese el segundo numero : ";
	cin >> n2;
	cout << endl;
	cout << "Ingrese el tecer numero : ";
	cin >> n3;
	cout << endl;

	double total = n1 + n2 + n3;
	double promedio = ((n1 + n2 + n3) / 3);
	cout << "El total de la suma de los 3 numeros es : " << total << endl;
	cout << "El promedio de los 3 numeros es : " << promedio << endl;


//	Calculo de porcentaje y total de propina 

	double totalcuenta, porcentajepropina; 

	cout << "Ingresar total de la cuenta : "; 
	cin >> totalcuenta;
	
	cout << "Ingresar el porcentaje de propina a dar : "; 
	cin >> porcentajepropina; 
	double totalpropina = (totalcuenta * porcentajepropina)/100; 
	cout << "La cantidad de propina a dar es : " << totalpropina << endl; 

	//IF, ELSE 

	//1.6 Numero mayor o menor a 100 
	int num1; 
	cout << "Ingrese un numero : "; 
	cin >> num1; 

	if (num1<=100)
	{
		cout << "El numero es menor o igual a 100 " << endl; 
	
	}
	else 
	{
		cout << "El numero es mayor a 100 " << endl; 


	}
		//1.7 NUMERO POSITIVO O NEGATIVO 

	int num2; 
    cout<< "Ingrese un numero : "; 
	cin >> num2; 
	if(num2 > 0) 
	{
		cout << "El numero es positivo" << endl; 


	}
	if  (num2<0)
	{
		cout << "El numero es negativo " << endl; 
	
	
	
	}
	if (num2 ==0)
	{
		cout << "El numero es 0 es un numero neutro " << endl; 
	}
	//1.8 preguntar por un email y validar una cotraseña 

	string Miemail;  
	int Password_Ingresado;
	cout << "Escriba su correo : "; 
	cin >> Miemail; 
	cout << "Escriba su password : "; 
	cin >> Password_Ingresado;
	if  (Password_Ingresado == 12345)
	{
		cout << "Felicidades password correcto" << endl; 
	}
	else 
	{
		cout << "Su password es incorrecto" << endl;
	}
	//1.9 farenheit a grados centígrados

	double farenheit; 
	cout << "Ingrese los grados farenheit : "; 
	cin >> farenheit; 
	double celcius = (farenheit - 32) * 5 / 9;
	
	if ( farenheit == 32 )
	{
		cout << farenheit << " grados farenheit es igual a 0 grados centigrados " << endl;

	}else 
	{
		cout << farenheit << "grados farenheit es igual a " << celcius << " grados centigrados" << endl; 
	}
	// 1.10 Calculo de masa corporal 
	double peso, estatura; 
	cout << "Ingrese su peso en kg : "; 
	cin >> peso; 
	cout << "Ingrese su estatura en metros: "; 
	cin >> estatura; 
	double masacorporal = peso / (estatura * estatura); 
    if (masacorporal>18.5)
	{
		cout << "Abajo del peso normal" << endl; 
	}
	if (masacorporal>=18.5 and masacorporal<25)
	{
		cout << "peso normal" << endl; 
	}
	if (masacorporal >= 25 and masacorporal < 30)
	{
		cout << "Sobrepeso" << endl; 
	}
	if (masacorporal>=30 and masacorporal<35)
	{
		cout << "Obeso clase 1" << endl; 
	}
	if (masacorporal>=35 and masacorporal<40)
	{
		cout << "Obeso clase 2" << endl; 
	}
	if (masacorporal>=40)
	{
		cout << "Obeso clase 3"; 
	}




}







