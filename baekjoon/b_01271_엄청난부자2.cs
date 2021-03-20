using System.Linq;
using static System.Console;
using System.Numerics;
class Program
{
    static void Main(string[] args)
    {
        
        var a = ReadLine().Split().Select(BigInteger.Parse).ToArray();
        Write($"{a[0]/a[1]}\n{a[0]%a[1]}");
    }
}