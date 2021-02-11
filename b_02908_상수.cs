using static System.Console;
using System.Linq;
var s=ReadLine().Split().Select(x=>int.Parse(x.Reverse().ToArray())).ToArray();
Write(s[0]>s[1]?s[0]:s[1]);