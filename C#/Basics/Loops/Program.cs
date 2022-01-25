using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Loops
{
    class Program
    {
        static void table(int num)
        {
            for (int x = 0; x <= 10; x++)
            {
                Console.WriteLine(num * x);
            }
        }

        static void Main(string[] args)
        {
            int i = 0;
            int j = 5;
            while (i <= 10)
            {
                Console.WriteLine(i * j);
                i++;

            }

            int a = 11;
            for (int b = 0; b <= 10; b++)
            {
                Console.WriteLine(a * b);

            }

            int y = 9;
            table(y);

            Console.ReadLine();
        }
    }
}
