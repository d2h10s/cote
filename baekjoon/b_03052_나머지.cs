using static System.Console;
using System.Linq;
var l=new int[10];
for(int i=0;i<10;i++) l[i]=int.Parse(ReadLine())%42;
Write(l.Distinct().Count());