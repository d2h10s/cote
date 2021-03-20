using static System.Console;
using System.Linq;        
ReadLine();
var s=ReadLine().Split().Select(int.Parse);
Write($"{s.Min()} {s.Max()}");