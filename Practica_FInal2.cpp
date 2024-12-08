namespace ConsoleApp1;

class Program
{
    static void Main(string[] args)
    {
        //Practica B 
        Console.WriteLine("Operacion uno : " + (3 + 5 * 2 / 2 - 1));
        Console.WriteLine("Operacion dos : " + (3 + 10 / 2 - 1));
        Console.WriteLine("Operacion tres : " + (3 + 5 - 1));
        Console.WriteLine("Operacion cuatro : " + (8 - 1));
        Console.WriteLine("Operacion cinco : " + (1.0 / 3) * 3);

        // 1.2 Codigo para poner el cuadrado de un numero
        Console.Write("Introduce el numero a elevar al cuadrado: ");
        int elevar = int.Parse(Console.ReadLine());
        Console.WriteLine("El cuadrado de este numero es : " + (elevar * elevar));

        // 1.3 Yardas a metros
        const double valoryardas = 0.9144;
        Console.Write("Numero de yardas: ");
        double yardas = double.Parse(Console.ReadLine());
        Console.WriteLine("Las yardas en metros son: " + (yardas * valoryardas));

        // 1.4 Depreciación de un auto
        double depreciacion = 200000 * 0.80;
        Console.WriteLine("La depreciación por año será: " + (depreciacion / 5) + " pesos");

        // 1.5 Deducción de impuestos
        double parteporcentual = (25000 - 900) * 0.015;
        double impuestototal = parteporcentual + 900;
        double sueldoneto = 25000 - impuestototal;
        Console.WriteLine("El impuesto total es: " + impuestototal + " pesos");
        Console.WriteLine("El sueldo neto es: " + sueldoneto + " pesos");

        // 1.6 Cálculo de operaciones
        // a
        int a = 3 * 4;
        Console.WriteLine("3 por 4 = " + a);

        // b
        int b = 12 / 3;
        Console.WriteLine("12 entre 3 = " + b);

        // c
        int c = 12 % 3;
        Console.WriteLine("Residuo de 12%3 = " + c);

        // d
        int d = 12 % 7;
        Console.WriteLine("Residuo de 12%7 = " + d);

        // e
        double e = 3 + 3.0;
        Console.WriteLine("3 + 3.0 = " + e);

        // f
        int f = 10 / 100;
        Console.WriteLine("10 / 100 = " + f);

        // g usando Math.Pow
        double g = Math.Pow(3, 2);
        Console.WriteLine("3 a la 2 = " + g);

        // 1.7 Comparaciones
        int x = 10;
        int y = 20;
        Console.WriteLine("(x > y) : " + (x > y));
        Console.WriteLine("(x < y) : " + (x < y));
        Console.WriteLine("(x == y) : " + (x == y));
        Console.WriteLine("(x != y) : " + (x != y));
        Console.WriteLine("(x + y) > 100 : " + ((x + y) > 100));
        Console.WriteLine("(x - y) == 0 : " + ((x - y) == 0));
        Console.WriteLine("(x * y) > 500 : " + ((x * y) > 500));
        Console.WriteLine("(x * y) < 100 : " + ((x * y) < 100));
        Console.WriteLine("(x - y) < 0 : " + ((x - y) < 0));
        Console.WriteLine("(x < 20) : " + (x < 20));



        //Practica C

        // Ejercicio 1.1 El cuadrado de un numero 
        Console.Write("Ingrese el numero: ");
        int numero = int.Parse(Console.ReadLine());
        Console.WriteLine();
        Console.WriteLine("El cuadrado del numero es: " + (numero * numero));

        // Ejercicio 1.2 numero multiplicado por 1,2,3,4,5
        Console.Write("Ingrese el numero a multiplicar: ");
        int por5 = int.Parse(Console.ReadLine());
        Console.WriteLine();
        Console.WriteLine("El numero multiplicado por 1,2,3,4,5 son los que se mostraran debajo:");
        Console.WriteLine("numero por 1: " + (por5 * 1));
        Console.WriteLine("numero por 2: " + (por5 * 2));
        Console.WriteLine("numero por 3: " + (por5 * 3));
        Console.WriteLine("numero por 4: " + (por5 * 4));
        Console.WriteLine("numero por 5: " + (por5 * 5));

        // 1.3 Convertir kg a libras
        Console.Write("Ingrese el peso en kilogramos: ");
        double kilogramos = double.Parse(Console.ReadLine());
        Console.WriteLine();
        Console.WriteLine("El peso en libras es: " + (kilogramos * 2.2));

        // 1.4 Total y promedio de 3 numeros
        double n1, n2, n3;
        Console.Write("Ingrese el primer numero: ");
        n1 = double.Parse(Console.ReadLine());
        Console.WriteLine();
        Console.Write("Ingrese el segundo numero: ");
        n2 = double.Parse(Console.ReadLine());
        Console.WriteLine();
        Console.Write("Ingrese el tercer numero: ");
        n3 = double.Parse(Console.ReadLine());
        Console.WriteLine();

        double total = n1 + n2 + n3;
        double promedio = total / 3;
        Console.WriteLine("El total de la suma de los 3 numeros es: " + total);
        Console.WriteLine("El promedio de los 3 numeros es: " + promedio);

        // Calculo de porcentaje y total de propina
        Console.Write("Ingresar total de la cuenta: ");
        double totalcuenta = double.Parse(Console.ReadLine());
        Console.Write("Ingresar el porcentaje de propina a dar: ");
        double porcentajepropina = double.Parse(Console.ReadLine());
        double totalpropina = (totalcuenta * porcentajepropina) / 100;
        Console.WriteLine("La cantidad de propina a dar es: " + totalpropina);

        // IF, ELSE
        // 1.6 Numero mayor o menor a 100
        Console.Write("Ingrese un numero: ");
        int num1 = int.Parse(Console.ReadLine());

        if (num1 <= 100)
        {
            Console.WriteLine("El numero es menor o igual a 100");
        }
        else
        {
            Console.WriteLine("El numero es mayor a 100");
        }

        // 1.7 NUMERO POSITIVO O NEGATIVO
        Console.Write("Ingrese un numero: ");
        int num2 = int.Parse(Console.ReadLine());

        if (num2 > 0)
        {
            Console.WriteLine("El numero es positivo");
        }
        if (num2 < 0)
        {
            Console.WriteLine("El numero es negativo");
        }
        if (num2 == 0)
        {
            Console.WriteLine("El numero es 0, es un numero neutro");
        }

        // 1.8 Preguntar por un email y validar una contraseña
        Console.Write("Escriba su correo: ");
        string Miemail = Console.ReadLine();
        Console.Write("Escriba su password: ");
        int Password_Ingresado = int.Parse(Console.ReadLine());

        if (Password_Ingresado == 12345)
        {
            Console.WriteLine("Felicidades, password correcto");
        }
        else
        {
            Console.WriteLine("Su password es incorrecto");
        }

        // 1.9 Fahrenheit a grados centígrados
        Console.Write("Ingrese los grados Fahrenheit: ");
        double farenheit = double.Parse(Console.ReadLine());
        double celcius = (farenheit - 32) * 5 / 9;

        if (farenheit == 32)
        {
            Console.WriteLine(farenheit + " grados Fahrenheit es igual a 0 grados Celsius");
        }
        else
        {
            Console.WriteLine(farenheit + " grados Fahrenheit es igual a " + celcius + " grados Celsius");
        }

        // 1.10 Calculo de masa corporal
        Console.Write("Ingrese su peso en kg: ");
        double peso = double.Parse(Console.ReadLine());
        Console.Write("Ingrese su estatura en metros: ");
        double estatura = double.Parse(Console.ReadLine());
        double masacorporal = peso / (estatura * estatura);

        if (masacorporal > 18.5)
        {
            Console.WriteLine("Abajo del peso normal");
        }
        if (masacorporal >= 18.5 && masacorporal < 25)
        {
            Console.WriteLine("Peso normal");
        }
        if (masacorporal >= 25 && masacorporal < 30)
        {
            Console.WriteLine("Sobrepeso");
        }
        if (masacorporal >= 30 && masacorporal < 35)
        {
            Console.WriteLine("Obeso clase 1");
        }
        if (masacorporal >= 35 && masacorporal < 40)
        {
            Console.WriteLine("Obeso clase 2");
        }
        if (masacorporal >= 40)
        {
            Console.WriteLine("Obeso clase 3");
        }


        // Practica C
        // 1.16 mostrar 3 números e indicar el mayor
        int num1, num2, num3;
        Console.Write("Ingrese el primer número: ");
        num1 = Convert.ToInt32(Console.ReadLine());
        Console.WriteLine();
        Console.Write("Ingrese el segundo número: ");
        num2 = Convert.ToInt32(Console.ReadLine());
        Console.WriteLine();
        Console.Write("Ingrese el tercer número: ");
        num3 = Convert.ToInt32(Console.ReadLine());
        Console.WriteLine();

        if (num1 > num2 && num1 > num3)
        {
            Console.WriteLine("El número mayor es: " + num1);
        }
        if (num2 > num1 && num2 > num3)
        {
            Console.WriteLine("El número mayor es: " + num2);
        }
        if (num3 > num2 && num3 > num1)
        {
            Console.WriteLine("El número mayor es: " + num3);
        }
        if (num1 == num2 && num1 != num3)
        {
            Console.WriteLine("El número mayor es: " + num1);
        }
        if (num1 == num2 && num1 == num3)
        {
            Console.WriteLine("El número mayor es: " + num1);
        }

        // 1.17 Mostrar el máximo y el mínimo de 3 números
        int num4, num5, num6;
        Console.Write("Ingrese el cuarto número: ");
        num4 = Convert.ToInt32(Console.ReadLine());
        Console.WriteLine();
        Console.Write("Ingrese el quinto número: ");
        num5 = Convert.ToInt32(Console.ReadLine());
        Console.WriteLine();
        Console.Write("Ingrese el sexto número: ");
        num6 = Convert.ToInt32(Console.ReadLine());
        Console.WriteLine();

        if (num4 > num5 && num4 > num6 && num5 > num6)
        {
            Console.WriteLine("El número mayor es: " + num4 + " Y El número menor es: " + num6);
        }
        if (num4 > num5 && num4 > num6 && num5 == num6)
        {
            Console.WriteLine("El número mayor es: " + num4 + " Y El número menor es: " + num6);
        }
        if (num4 > num5 && num4 > num6 && num6 > num5)
        {
            Console.WriteLine("El número mayor es: " + num4 + " Y El número menor es: " + num5);
        }
        if (num4 > num5 && num4 > num6 && num6 == num5)
        {
            Console.WriteLine("El número mayor es: " + num4 + " Y El número menor es: " + num5);
        }

        if (num5 > num4 && num5 > num6 && num6 > num4)
        {
            Console.WriteLine("El número mayor es: " + num5 + " Y El número mínimo es: " + num4);
        }
        if (num5 > num4 && num5 > num6 && num6 == num4)
        {
            Console.WriteLine("El número mayor es: " + num5 + " Y El número mínimo es: " + num4);
        }
        if (num5 > num4 && num5 > num6 && num4 > num6)
        {
            Console.WriteLine("El número mayor es: " + num5 + " Y El número mínimo es: " + num6);
        }
        if (num5 > num4 && num5 > num6 && num4 == num6)
        {
            Console.WriteLine("El número mayor es: " + num5 + " Y El número mínimo es: " + num6);
        }

        if (num6 > num5 && num6 > num4 && num4 > num5)
        {
            Console.WriteLine("El número mayor es: " + num6 + " Y El número menor es: " + num5);
        }
        if (num6 > num5 && num6 > num4 && num4 == num5)
        {
            Console.WriteLine("El número mayor es: " + num6 + " Y El número menor es: " + num5);
        }
        if (num6 > num5 && num6 > num4 && num5 > num4)
        {
            Console.WriteLine("El número mayor es: " + num6 + " Y El número menor es: " + num4);
        }
        if (num6 > num5 && num6 > num4 && num5 == num4)
        {
            Console.WriteLine("El número mayor es: " + num6 + " Y El número menor es: " + num4);
        }
        if (num4 == num5 && num4 != num6 && num6 > num4)
        {
            Console.WriteLine("El número mayor es: " + num4 + " Y El número menor es: " + num4);
        }
        if (num4 == num5 && num4 != num6 && num6 < num4)
        {
            Console.WriteLine("El número mayor es: " + num4 + " Y El número menor es: " + num6);
        }
        if (num6 == num5 && num6 != num4 && num6 < num4)
        {
            Console.WriteLine("El número mayor es: " + num6 + " Y El número menor es: " + num6);
        }
        if (num6 == num5 && num6 != num4 && num6 > num4)
        {
            Console.WriteLine("El número mayor es: " + num6 + " Y El número menor es: " + num4);
        }
        if (num4 == num5 && num4 == num6)
        {
            Console.WriteLine("El número mayor es: " + num4 + " Y El número mínimo es: " + num4);
        }

        // Programa que leea las horas +1 segundo
        int horas, minutos, segundos;
        Console.Write("Introduzca las horas: ");
        horas = Convert.ToInt32(Console.ReadLine());
        Console.WriteLine();
        Console.Write("Introduzca los minutos: ");
        minutos = Convert.ToInt32(Console.ReadLine());
        Console.WriteLine();
        Console.Write("Introduzca los segundos: ");
        segundos = Convert.ToInt32(Console.ReadLine());
        Console.WriteLine();

        segundos += 1;

        if (segundos == 60)
        {
            segundos = 0;
            minutos += 1;

            Console.WriteLine("La fecha es: " + horas + " horas con " + minutos + " minutos y " + segundos + " segundos");
        }
        if (minutos == 60)
        {
            minutos = 0;
            horas += 1;

            Console.WriteLine("La fecha es: " + horas + " horas con " + minutos + " minutos y " + segundos + " segundos");
        }
        if (horas == 24)
        {
            horas = 0;
            Console.WriteLine("La fecha es: " + horas + " horas con " + minutos + " minutos y " + segundos + " segundos");
        }
        else
        {
            Console.WriteLine("La fecha es: " + horas + " horas con " + minutos + " minutos y " + segundos + " segundos");
        }

        // Boleto de ida y de salida de avión
        double precioDelBoleto, kilometros;
        int dias;
        Console.Write("Ingrese los días de viaje: ");
        dias = Convert.ToInt32(Console.ReadLine());
        Console.Write("Ingrese los kilómetros del viaje: ");
        kilometros = Convert.ToDouble(Console.ReadLine());
        precioDelBoleto = kilometros * 2.5;

        if (dias > 7 && kilometros > 800)
        {
            Console.WriteLine("El precio del boleto es: " + precioDelBoleto * 0.70);
        }
        else
        {
            Console.WriteLine("El precio del boleto es: " + precioDelBoleto);
        }

        // 1.20
        // a) Ángulo recto
        double angulo;
        Console.Write("Ingrese un ángulo: ");
        angulo = Convert.ToDouble(Console.ReadLine());
        if (angulo != 90)
        {
            Console.WriteLine("El ángulo no es recto");
        }
        if (angulo == 90)
        {
            Console.WriteLine("El ángulo es recto");
        }

        // b) Temperatura de ebullición
        double temperatura;
        Console.Write("Introduzca la temperatura en Celsius: ");
        temperatura = Convert.ToDouble(Console.ReadLine());
        if (temperatura >= 100)
        {
            Console.WriteLine("Por encima del punto de ebullición del agua");
        }
        else
        {
            Console.WriteLine("Por debajo del punto de ebullición del agua");
        }

        // c) Número que se le suma positivos
        int numero;
        int positivos = 0;
        int negativos = 0;

        Console.Write("Introduzca un número: ");
        numero = Convert.ToInt32(Console.ReadLine());

        while (numero != 0)
        {
            if (numero > 0)
            {
                positivos += numero;
            }
            else
            {
                negativos += numero;
            }

            Console.Write("Introduzca un número (0 para terminar): ");
            numero = Convert.ToInt32(Console.ReadLine());
        }

        Console.WriteLine("Total de positivos: " + positivos);
        Console.WriteLine("Total de negativos: " + negativos);

        // d) Si “x” es mayor que “y”, y “z” es menor que “y”, imprimir “x”.
        int x, y, z;
        Console.Write("Introduzca valor de x: ");
        x = Convert.ToInt32(Console.ReadLine());
        Console.Write("Introduzca valor de y: ");
        y = Convert.ToInt32(Console.ReadLine());
        Console.Write("Introduzca valor de z: ");
        z = Convert.ToInt32(Console.ReadLine());

        if (x > y && z < y)
        {
            Console.WriteLine("Valor z: " + z);
        }

        // e) Variable tiempo condición de distancia
        double distancia;
        int tiempo;

        Console.Write("Introduzca la distancia: ");
        distancia = Convert.ToDouble(Console.ReadLine());

        if (distancia > 20 && distancia < 35)
        {
            Console.Write("Introduzca el tiempo: ");
            tiempo = Convert.ToInt32(Console.ReadLine());

            Console.WriteLine("La distancia es: " + distancia + " y el tiempo es: " + tiempo);
        }
        else
        {
            Console.WriteLine("No está entre 21 y 34");
        }


        // Practica E
        // 1.21 do while Ciclo do while
        string salir;
        do
        {
            Console.WriteLine("Desea salir del menu (SI/NO)? ");
            salir = Console.ReadLine().ToUpper();
        } while (salir != "SI");

        // 1.22 Hacer calculadora de operaciones aritméticas básicas
        string opciondeoperacion;
        int numero1, numero2, total;

        do
        {
            Console.WriteLine("Menu de operaciones:");
            Console.WriteLine("a) Suma de dos operandos");
            Console.WriteLine("b) Resta de dos operandos");
            Console.WriteLine("c) Multiplicación de dos operandos");
            Console.WriteLine("d) División de dos operandos");
            Console.WriteLine("e) Residuo de dos operandos");
            Console.WriteLine("s) Salir del menu");
            Console.WriteLine("Seleccione una opcion:");
            opciondeoperacion = Console.ReadLine();

            if (opciondeoperacion != "s")
            {
                Console.Write("Ingrese el primer número: ");
                numero1 = int.Parse(Console.ReadLine());
                Console.Write("Ingrese el segundo número: ");
                numero2 = int.Parse(Console.ReadLine());
            }

            if (opciondeoperacion == "a")
            {
                total = numero1 + numero2;
                Console.WriteLine($"La suma de los números es: {total}");
            }
            else if (opciondeoperacion == "b")
            {
                total = numero1 - numero2;
                Console.WriteLine($"La resta de los números es: {total}");
            }
            else if (opciondeoperacion == "c")
            {
                total = numero1 * numero2;
                Console.WriteLine($"La multiplicación de los números es: {total}");
            }
            else if (opciondeoperacion == "d" && numero2 != 0)
            {
                total = numero1 / numero2;
                Console.WriteLine($"La división de los números es: {total}");
            }
            else if (opciondeoperacion == "e" && numero2 != 0)
            {
                total = numero1 % numero2;
                Console.WriteLine($"El residuo de los números es: {total}");
            }

            numero1 = 0;
            numero2 = 0;
            total = 0;

        } while (opciondeoperacion != "s");

        // 1.23 Simulación de cajero
        double saldo = 3450;
        int pin;

        Console.Write("Ingrese su PIN de 4 dígitos por favor: ");
        pin = int.Parse(Console.ReadLine());

        while (pin != 1234)
        {
            Console.WriteLine("El PIN es incorrecto.");
            break;
        }

        if (pin == 1234)
            Console.WriteLine("PIN correcto");

        char opcioncajero;

        do
        {
            Console.WriteLine("Menu de cajero de operaciones UNITEC");
            Console.WriteLine("a) Consulta de saldo");
            Console.WriteLine("b) Retiro de dinero");
            Console.WriteLine("c) Cancelar operación");
            Console.Write("Escoja una opción: ");
            opcioncajero = Console.ReadKey().KeyChar;
            Console.WriteLine();

            if (opcioncajero == 'a')
            {
                Console.WriteLine("Su saldo es: 3450.00 pesos");
                break;
            }
            if (opcioncajero == 'b')
            {
                double cantidadretiro;
                Console.Write("Su saldo es de 3450.00 pesos, por favor elija la cantidad a retirar: ");
                cantidadretiro = double.Parse(Console.ReadLine());

                if (cantidadretiro > saldo)
                {
                    Console.WriteLine("Fondos insuficientes");
                    break;
                }
                if (cantidadretiro <= saldo)
                {
                    saldo -= cantidadretiro;
                    Console.WriteLine($"Ha retirado exitosamente {cantidadretiro} pesos. Su saldo restante es de: {saldo} pesos");
                    break;
                }
            }

        } while (opcioncajero != 'c');

        // 1.24 Temple Run

        Random rand = new Random();
        int castigo, premio;
        int vida = 12;
        Console.WriteLine($"Vida inicial: {vida}");

        while (vida > 0)
        {
            // Consume vida
            vida--;
            Console.WriteLine($"Consumo: {vida}");

            castigo = rand.Next(0, 2); // Genera 0 o 1
            if (castigo == 1)
            {
                vida -= 3;
                Console.WriteLine($"Castigo: {vida}");
            }

            premio = rand.Next(0, 2); // Genera 0 o 1
            if (premio == 1)
            {
                vida += 3;
                Console.WriteLine($"Premio: {vida}");
            }

            Console.WriteLine($"Fin ciclo: {vida}");
        }


        //Practica F 
        // Ejercicio 1: Cuenta regresiva de 9 a 0
        Console.WriteLine("Cuenta regresiva de 9 a 0:");
        for (int a = 9; a >= 0; a--)
        {
            Console.Write(a + " ; ");
        }
        Console.WriteLine();

        // Ejercicio 2: Contar desde 0 a 99
        Console.WriteLine("Contar desde 0 a 99:");
        for (int i = 0; i <= 99; i++)
        {
            Console.Write(i + " ; ");
        }
        Console.WriteLine();

        // Ejercicio 3: Contar de 0 a 100 pero solo imprimir los pares
        Console.WriteLine("Contar de 0 a 100 pero solo los pares:");
        for (int i = 2; i <= 100; i += 2)
        {
            Console.Write(i + " ; ");
        }
        Console.WriteLine();

        // Ejercicio 4: Rango mínimo y uno máximo e imprimir los números de esa secuencia
        Console.WriteLine("Máximo y mínimo secuencia:");
        Console.Write("Ingrese el mínimo: ");
        int minimo = int.Parse(Console.ReadLine());

        Console.Write("Ingrese el máximo: ");
        int maximo = int.Parse(Console.ReadLine());

        for (int i = minimo; i <= maximo; i++)
        {
            Console.Write(i + " ; ");
        }
        Console.WriteLine();

        // Ejercicio 5: Mínimo y máximo e imprimir en cuenta regresiva
        Console.WriteLine("Máximo y mínimo secuencia regresiva:");
        Console.Write("Ingrese el mínimo: ");
        int minimo1 = int.Parse(Console.ReadLine());

        Console.Write("Ingrese el máximo: ");
        int maximo2 = int.Parse(Console.ReadLine());

        for (int i = maximo2; i >= minimo1; i--)
        {
            Console.Write(i + " ; ");
        }
        Console.WriteLine();

        // Practica G
       
        // Ejercicio 1: Arreglo de meses
        string[] nombreMes = { "Enero", "Febrero", "Marzo", "Abril", "Mayo", "Junio", "Julio", "Agosto", "Septiembre", "Octubre", "Noviembre", "Diciembre" };

        // Ejercicio 2: Imprimir los nombres de los meses
        Console.WriteLine("Meses:");
        for (int i = 0; i < 12; i++)
        {
            Console.Write(nombreMes[i] + " ; ");
        }
        Console.WriteLine();

        // Ejercicio 3: Arreglo de planetas
        string[] nombrePlaneta = { "Mercurio", "Venus", "Tierra", "Marte", "Jupiter", "Saturno", "Urano", "Neptuno" };

        // Ejercicio 4: Imprimir los planetas del sistema solar
        Console.WriteLine("Planetas del sistema solar:");
        for (int i = 0; i < 8; i++)
        {
            Console.Write(nombrePlaneta[i] + " ; ");
        }
        Console.WriteLine();

        // Practica I
        // Matriz de 9x9
        int[,] matriz = {
            { 0, 3, 0, 0, 0, 0, 0, 0, 0 },
            { 0, 2, 0, 9, 0, 6, 3, 0, 0 },
            { 0, 6, 0, 4, 0, 2, 0, 9, 0 },
            { 1, 0, 0, 0, 9, 0, 4, 0, 0 },
            { 0, 0, 8, 1, 0, 3, 5, 0, 0 },
            { 0, 0, 5, 0, 7, 0, 0, 0, 3 },
            { 0, 5, 0, 3, 0, 1, 0, 6, 0 },
            { 0, 0, 4, 6, 0, 7, 0, 3, 0 },
            { 0, 0, 0, 0, 0, 0, 0, 8, 0 }
        };

        // Mostrar la matriz de 9x9
        Console.WriteLine("Matriz de 9x9:");
        for (int i = 0; i < 9; i++)
        {
            for (int j = 0; j < 9; j++)
            {
                Console.Write(matriz[i, j] + " ; ");
            }
            Console.WriteLine();
        }

    }
}
