using static System.Console;
var x=ReadLine().Split();
var (a,b)=(int.Parse(x[0]),int.Parse(x[1]));
Write(a<b?"<":a>b?">":"==");