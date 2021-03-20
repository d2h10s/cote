using System.Linq;
using static System.Console;
var m=ReadLine().Split().Select(int.Parse).ToList();
var p=new bool[1000001];
var s=new System.Text.StringBuilder();
for(int i=2;i<=m[1];i++)if(!p[i]){if(i>=m[0])s.Append($"{i}\n");for(int j=i*2;j<=m[1];j+=i)p[j]=true;}
Write(s);

/*
using System.Linq;
using static System.Console;
var m=ReadLine().Split().Select(int.Parse).ToList();
var p=new bool[1000001];
var s=new System.Text.StringBuilder();
for(int i=2;i<=m[1];i++)if(!p[i]){if(i>=m[0])s.Append(i).Append('\n');for(int j=i*2;j<=m[1];j+=i)p[j]=true;}
Write(s);
*/