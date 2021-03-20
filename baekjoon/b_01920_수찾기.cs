using static System.Console;
using System.Linq;
using System.Text;

class P
{
    static void Main(string[] args)
    {
        var r = new StringBuilder();
        ReadLine();
        var N = ReadLine().Split(' ').Distinct().ToHashSet();
        ReadLine();
        ReadLine().Split(' ').ToList().ForEach(n => r.Append(N.TryGetValue(n, out _) ? "1\n" : "0\n"));
        WriteLine(r);
    }
}