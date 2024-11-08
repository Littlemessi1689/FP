// ConsoleApplication2.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std; 

int main()
{
  //switch es de descicion es switch (Valor ya seda constante o variable y lleva sus llavecitas 
  // {Seguido de un case valor1 : instrucciones y termina en break;  despues case valor2 instruccion break; y por uñtimo default: } break 
	int numMes; cout << "Dame el numero de un mes del año por favor :  "; 
	cin >> numMes; // poner solo swicth para que se ponga la sintaxis 
	
	

		switch (numMes)
		{
		case 1:
			cout << "ENE" << endl;
			break;
		case 2: cout << "FEB" << endl;
			break;
		case 3: cout << "MAR" << endl;
			break;
		case 4: cout << "ABRIL" << endl;
			break;
		case 5: cout << "MAYO" << endl;
			break;
		case 6: cout << "JUNIO" << endl;
			break;
		case 7: cout << "Julio" << endl;
			break;
		case 8: cout << "AGO" << endl;
			break;
		case 9: cout << "SEP" << endl;
			break;
		case 10: cout << "OCT" << endl;
			break;
		case 11: cout << "NOV" << endl;
			break;
		case 12: cout << "DEC" << endl;
			break;
		default:
			cout << "Mes invalido" << endl;
			break;
		}

          // while (true) 
		//{ cout << "ciclo infinito"   para el ejercicio temple run vamos a ignorar izquierda y derecha, inicia con vida =12 
		// modificador de castugo = vida-3, de premio es vida +3, consumo +1, mientras esta vida es mayor a 0 se continuia y regra al cilco 
	
														//aleatorios 
	// Ejercicio 1.24 Temple Run  seria algo asi  vida   premio castigo consumo 
											  //  12      +3      0       -1     =14 
											  // 12       0      -3       -1    = 8 
											  //  12      +3      -3      -1    = 11           todo esto con rand()



		//Asi se hacen numeros alestorios entre 0 y uno 
		srand(time(NULL)); //seed 
		int castigo;
		int i = 0;
		while (i <= 10) {
			castigo = rand() % 2; // geenra un 0 o 1  si fuera un 3 seria un 0 un 1 o un 2  y asi 
			cout << castigo << endl;
			i++;
		}



		

	}
	








