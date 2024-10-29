// ConsoleApplication1.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//
//Jose Francisco Emmanuel Estrada Mora 
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
	if (num1 > num2 and num1 > num3)
	{
		cout << "EL numero mayor es :" << num1 << endl;
	}
	if (num2 > num1 and num2 > num3)
	{
		cout << "EL numero mayor es :" << num2 << endl;
	}
	if (num3 > num2 and num3 > num1)
	{
		cout << "EL numero mayor es :" << num3 << endl;
	}
	if (num1 == num2 and num1 != num3)
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
	cin >> num4;
	cout << endl;
	cout << " Ingrese el quinto  numero ";
	cin >> num5;
	cout << endl;
	cout << " Ingrese el sexto numero ";
	cin >> num6;
	cout << endl;

	if (num4 > num5 and num4 > num6 and num5 > num6)
	{
		cout << "EL numero mayor es :" << num4 << " Y El numero menor es : " << num6 << endl;
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
		cout << "EL numero mayor es :" << num5 << " Y El numero minimo es : " << num4 << endl;
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

	if (num6 > num5 and num6 > num4 and num4 > num5)
	{
		cout << "EL numero mayor es :" << num6 << " Y el numero menor es :" << num5 << endl;
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
	if (num4 == num5 and num4 != num6 and num6 > num4)
	{
		cout << "El numero mayor es :" << num4 << " Y el numero menor es : " << num4 << endl;

	}
	if (num4 == num5 and num4 != num6 and num6 < num4)
	{
		cout << "El numero mayor es :" << num4 << " Y el numero menor es : " << num6 << endl;

	}
	if (num6 == num5 and num6 != num4 and num6 < num4)
	{
		cout << "El numero mayor es :" << num6 << " Y el numero menor es : " << num6 << endl;

	}
	if (num6 == num5 and num6 != num4 and num6 > num4)
	{
		cout << "El numero mayor es :" << num6 << " Y el numero menor es : " << num4 << endl;

	}

	if (num4 == num5 and num4 == num6)

	{
		cout << "el numero mayor es : " << num4 << " y el minimo es :  " << num4 << endl;
	}
	// Programa que leea las horas +1 segundo 
	int horas, minutos, segundos;
	cout << "Introdusca las horas";
	cin >> horas;
	cout << endl;
	cout << "Introdusca los minutos";
	cin >> minutos;
	cout << endl;
	cout << "Introdusca los segundos";
	cin >> segundos;
	cout << endl;

	segundos = segundos + 1; 
	
	if (segundos == 60 )
	{
		segundos = 0 ;
		minutos = minutos + 1;



		cout << "LA FEHCA ES : " << horas << " horas con  " << minutos << " minutos y " << segundos << " segundos" << endl;
	}
	if (minutos == 60 )
	{
		minutos = 0; 
		horas = horas + 1;



		cout << "LA FEHCA ES : " << horas << " horas con  " << minutos << " minutos y " << segundos << "segundos" << endl;
	}
	if (horas == 24)
	{

		horas = 0 ;
		



		cout << "LA FEHCA ES : " << horas << " horas con  " << minutos << " minutos y " << segundos << "segundos" << endl;
	}else 
	{

		cout << "LA FEHCA ES : " << horas << " horas con  " << minutos << " minutos y " << segundos << "segundos" << endl;
	}
	

	

	//Boleto de ida y de salida de avion 

	double preciodelboleto, kilometros; 
	int dias; 
	cout << "ingrese los dias de viaje"; 
		cin >> dias;
		cout << "Ingrese los kilometros del viaje"; 
			cin >> kilometros; 
			preciodelboleto = kilometros * 2.5; 
			if (dias>7 and kilometros>800 )
			{
				cout << "El precio del boleto es : " << preciodelboleto * 0.70 << endl; 
			}else 
			{
				cout << "El precio del boleto es :" << preciodelboleto << endl; 
			}

     //1.20 
			//a angulo recto 
			double angulo; 
			cout << "Ingrese un angulo "; 
			cin >> angulo; 
			if (angulo != 90)
			{
				cout << "El angulo no es recto " << endl; 
			
			}if (angulo == 90 )
			{
				cout << "El angulo es recto " << endl;
			
			}

			//b temeperatura aebullicion 
			double temperatura; 
			cout<< "Introdusca la temperatura en celcius "; 
			cin>> temperatura; 
			if (temperatura>=100 )
			{
				cout << "por encima del punto de ebullición del agua" << endl; 
			} else 
			{
				cout << "por debajo del punto de ebullición del agua" << endl ; 
			}
			//c numero que se le suma positivos 


				int numero;
				int Positivos = 0;
				int Negativos = 0;

				cout << "Introduzca un numero  ";
				cin >> numero;

				while (numero != 0) {
					if (numero > 0) 
					{

						Positivos += numero; 
					}
					else {
						Negativos += numero; // Acumula en total de negativos
					}

					cout << "Introduzca 0";
					cin >> numero;
				}

				cout << "Total de positivos: " << Positivos << endl;
				cout << "Total de negativos: " << Negativos << endl;

				//d si “x” es mayor que “y”, y “z” es menor que “y”, imprimir “x”. 
				int x, y, z; 
				cout << "Introdusca valor de x "; 
					cin >> x; 
					cout << "Introdusca valor de y ";
					cin >> y;
					cout << "Introdusca valor de z ";
					cin >> z;

					if(x>y and z<y)
					{
						cout << "valor z " << z << endl; 
					
					}

					// e variable tiempo condicion de distacnia 
					
						double distancia; 
						int tiempo;

						cout << "Introduzca la distancia: ";
						cin >> distancia;

						
						if (distancia > 20 and distancia < 35) 
						{
							cout << "Introduzca el tiempo: ";
							cin >> tiempo;

							cout << "La distancia es: " << distancia << " y el tiempo es: " << tiempo << endl;
						}else 
						{
							cout << "no esta entre 21 y 34" << endl;
						
						}
						


}

