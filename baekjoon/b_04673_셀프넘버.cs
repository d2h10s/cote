using static System.Console;
using System.Linq;
var n=Enumerable.Range(1,10000).ToList();
for(int i=0;i<10001;i++){n.Remove(i+i.ToString().Sum(x=>x-48));};
Write(string.Join('\n',n));