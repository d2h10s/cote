using static System.Console;
using System.Linq;
int n=int.Parse(ReadLine());
for(int i=0;i<n;i++)
{
    var s=ReadLine().Split();
    var (H,N)=(int.Parse(s[0]),int.Parse(s[2]));
    Write($"{(N-1)%H+1}{(N-1)/H+1:D2}\n");
}