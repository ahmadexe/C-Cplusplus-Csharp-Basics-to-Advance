using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Decision
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.Write("Enter your age: ");
            string age = Console.ReadLine();

            if (Convert.ToInt32(age) >= 18)
            {
                Console.WriteLine("You can drive.");
            }

            else if (Convert.ToInt32(age) <= 18)
            {
                Console.WriteLine("You can't drive.");
            }

            Console.ReadLine();
        }
    }
}
