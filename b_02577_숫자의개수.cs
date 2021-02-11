using static System.Console;
using System.Linq;
var n=(int.Parse(ReadLine())*int.Parse(ReadLine())*int.Parse(ReadLine())).ToString();
for(int i=0;i<10;i++)WriteLine(n.Count(x=>x-'0'==i));