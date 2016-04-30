using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace edx_AssignmentOne
{
    class Program
    {
        static void Main(string[] args)
        {
            /*
            Console.WriteLine("First Name :");
            string firstName = Console.ReadLine();

            Console.WriteLine("Last Name :");
            string lastName = Console.ReadLine();

            Console.WriteLine("Birth Date :");
            string birthDate = Console.ReadLine();

            Console.WriteLine("Adress :");
            string adress = Console.ReadLine();

            Console.WriteLine("Your inputs :");
            Console.WriteLine(firstName);
            Console.WriteLine(lastName);
            Console.WriteLine(birthDate);
            Console.WriteLine(adress);

            Console.ReadLine();
            */
            Console.WriteLine("First Name :");
            string firstName = Console.ReadLine();

            foreach (char character in firstName)
            {
                Console.WriteLine(character);
            }
            Console.ReadLine();

        }
    }
}
