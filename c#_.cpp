namespace ConsoleApp3
{
    internal class Program
    {
        static void Main(string[] args)
        {
            string nombre;
            Console.WriteLine("Dame tu nombre : ");
            nombre = Console.ReadLine();
            Console.WriteLine("Nombre :" + nombre);
            int edad;
            Console.Write("Dame tu edad : "); 
            edad = int.Parse(Console.ReadLine());
            Console.WriteLine();
            Console.WriteLine("Tu edad es : "  + edad);
            double estatura;
            Console.WriteLine("Dame tu estatura : ");
            estatura = double.Parse(Console.ReadLine());
            double peso;
            Console.WriteLine("Dame tu peso  : ");
            peso = double.Parse(Console.ReadLine());
            double mc;
            mc = peso /(Math.Pow(estatura,2));
            Console.Write("Masa Corporal" + mc); 
            if (mc < 10.5) 
            {
                Console.WriteLine("Peso Bajo"); 
            }
            for(int i=0; 1<=9; i++) 
            {
                Console.Write(i + " , "); 
            }
            int[] numeros = new int[10] { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, };
            string[] trimestre = { "Enero", "Febrero", "Marzo" };  
            for(int i=0; i<= 9; i++) 
            {
                Console.Write(numeros[i]);
            }
            int[,] sudoku = new int[9, 9]; 
            foreach (string elemento in trimestre) 
            {
                Console.WriteLine(elemento);
            }
            
        }
    }
}
/*Console.Write("Mi nombre es : ");
Console.WriteLine("Jose");
Console.Write("Ing en mecatronica");*/
