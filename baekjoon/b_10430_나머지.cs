using static System.Console;
var x=ReadLine().Split();
var (a,b,c)=(int.Parse(x[0]),int.Parse(x[1]),int.Parse(x[2]));
Write($"{(a+b)%c}\n{(a%c+b%c)%c}\n{a*b%c}\n{a%c*(b%c)%c}");