namespace Prova1NitroCSharp
{
    internal class Program
    {
        static void Main(string[] args)
        {
            string Origem = Console.ReadLine();
            string stringFinal;

            var LimiteMaximo = Convert.ToInt32(Math.Pow(10, 4));

            if (Origem.Length <= 1 || Origem.Length > LimiteMaximo)
            {
                Environment.Exit(0);
            }

            Origem = Origem.ToLower();

            stringFinal = Origem.Substring(0, Origem.Length / 2);
            
            while(stringFinal.Length < Origem.Length)
            {
                stringFinal += stringFinal;
            }

            if (stringFinal.Equals(Origem))
            {
                Console.WriteLine("VALIDO");

            }
            else
            {
                Console.WriteLine("INVALIDO");
            }
        }
    }
}