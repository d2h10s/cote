using static System.Console;
var s=ReadLine().Split();
var (a,b)=(int.Parse(s[0]),int.Parse(s[1]));
Write($"{a+b}\n{a-b}\n{a*b}\n{a/b}\n{a%b}");