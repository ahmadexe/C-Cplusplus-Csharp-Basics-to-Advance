using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace OOP_start
{
    class Player
    {
        public int health;
        public string power;

        public void setInfo(int a, string b)
        {
            health = a;
            power = b;
        }

        public void getInfo()
        {
            Console.WriteLine($"Your player has {power} power and his health is {health}.");
        }
    }
    class Program
    {
        static void Main(string[] args)
        {
            Player Ahmad = new Player();
            Ahmad.setInfo(100, "Wind");
            Ahmad.getInfo();

            Console.ReadLine();
        }
    }
}
