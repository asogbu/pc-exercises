// Exercise 01-A: Line Totals

using System;
using System.Linq;

class Program
{
    static void Main()
    {
        string line;
        while ((line = Console.ReadLine()) != null)
        {
            Console.WriteLine(line.Trim().Split(' ').Select(int.Parse).ToArray().Sum());
        }
    }
}
