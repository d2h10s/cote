using static System.Console;
using System.Linq;        
ReadLine();
var n=ReadLine().Split().Select(int.Parse);
Write(n.Average()/n.Max()*100);