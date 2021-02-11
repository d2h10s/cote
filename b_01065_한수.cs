using static System.Console;
using System.Linq;
int n=int.Parse(ReadLine()),c=99;
if(n<100){Write(n);return;}
for(int i=100;i<=n;i++){
    var m=i.ToString().Select(x=>x-'0').ToArray();
    if(m[0]-m[1]==m[1]-m[2])c++;
}
Write(c);