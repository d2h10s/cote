using System.Linq;
using static System.Console;
ReadLine();
var m=ReadLine().Split().Select(int.Parse).ToList();
var p=new bool[1001];
int c=0,M=m.Max();
p[1]=true;
for(int i=2;i<=M;i++)if(!p[i]){for(int j=i*2;j<=M;j+=i)p[j]=true;}
foreach(var i in m)if(!p[i])c++;
Write(c);