using static System.Console;
using System.Linq;        
var n=int.Parse(ReadLine());
for(int i=0;i<n;i++)
{
    var s=ReadLine().Split();
    var m=int.Parse(s[0]);
    s[1].ToList().ForEach(x => Write(new string(x, m)));
    WriteLine();
}