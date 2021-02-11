using static System.Console;
using System.Linq;
int c=0,n=int.Parse(ReadLine());
for(int i=0;i<n;i++)
{
    char p='\0';
    string s=ReadLine(),z="";
    if(s.Trim()=="")continue;
    foreach(var j in s){if(p!=j)z+=j;p=j;}
    if(z.Length==z.ToHashSet().Count())c++;
}
Write(c);