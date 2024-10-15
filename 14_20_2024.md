// ConsoleApplication1.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <iostream>
using namespace std; 

int main()

{
    
    //Operadores de Comparacion 


    int a = 10; 
    int b = 20; 
    int c; 
    
    float x = 15.5;
    float y = 5.2; 
    float z; 



    // Esta instruccion para imprimir true o false para no imprimir  1 en lugar de tru y false en lugar de 0 
    cout << boolalpha;

    //1 . Igualdad 
    cout << "(a==b) : "<< (a == b) << endl;
    cout << "(x == y)  : "<< (x == y) << endl; // pues no son iguales dara falso 


    //2. desigualdad (diferente a) 
    cout << "(a != b) : "<< (a != b) << endl; // son diferentes 
    cout << "(x != y) : "<<(x != y) << endl;

    //3 mayor que 
    cout << "(a > b)" << (a>b)<< endl;
    cout << "(x > y)" << (x > y) << endl;

    //4 menor que 
    cout << "(a < b) :" << (a<b) << endl;
    cout << "(x < y) : " << (x > y) << endl;

    //5 Mayor o igual
    cout << "(a >= b) :" << (a >= b) << endl;
    cout << "(x >= y) : " << (x >= y) << endl;

    //6 menor o igual 
    cout << "(a <= b) :" << (a <= b) << endl;
    cout << "(x <= y) : " << (x <= y) << endl;

    //7 ciomparaciones de tipos mixto 
    cout << "(a > y) : " << (a > y) << endl;
    cout << "(x < b) : " << (x < b) << endl;

    //8 valores negativos 
    cout << "(a > -b) : " << (a > -b) << endl;
    cout << "(x < -y) : " << (x < -y) << endl;

    //9 convinacion de comparaciones 
    cout << ((a < b) and (x > y)) << endl; 
    cout << ((a == 10) or (x == 5.2)) << endl; 

    //10 comparaciones anidadas 
    cout << (a > b - 10) << endl; 
    cout << (x <= y + 10.3) << endl; 

    //11 Comparacion con constantes 
    cout << (a == 10) << endl; 
    cout << (y == 5.2) << endl;

    //12 Comparacion con los resultados de las operaciones aritmeticas 
    cout << ((a + b) < (x * y)) << endl;
    cout << ((b - a) >= (x / y)) << endl; 

    //13 Comparacion de reultados negativos y positivos 
    cout << (-a < b) << endl; 
    cout << ((-x) > y) << endl; 

    //14 Combinbacion aritmetica y comparacion 
    cout << ((a * b) > (x - y)) << endl; 
    cout << ((b / a) <= (x + y)) << endl; 

    //15 Comparaciones encadenadas 
    cout << (a < b and b < x) << endl; 
    cout << (y > x and x > a) << endl; 

    //16 Comparacion de módulo 
    cout << ((b % a) == 0) << endl; //residuo 
