using System;
using System.Linq;
// A/B 문제
class P
{
    static void Main(string[] args)
    {
        var a = Console.ReadLine().Split(' ').Select(x => Convert.ToDouble(x)).ToArray();
        Console.WriteLine(a[0]/a[1]);
        
    }
}