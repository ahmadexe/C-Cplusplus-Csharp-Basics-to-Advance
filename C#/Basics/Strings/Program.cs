using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Strings
{
    class Program
    {
        static void Main(string[] args)
        {
            // Getting length of strings

            string str1 = "Hello! My name is Ahmad";
            Console.WriteLine(str1.Length);

            // Getting string in Upper case

            Console.WriteLine(str1.ToUpper());

            // Getting string in Lower case

            Console.WriteLine(str1.ToLower());

            // String Interpolation

            string name = Console.ReadLine();
            string sports = Console.ReadLine();

            Console.WriteLine($"Your name is {name}. You play {sports}");


            // Substrings

            Console.WriteLine(str1.Substring(7, 3));


            Console.ReadLine();
        }
    }
}
