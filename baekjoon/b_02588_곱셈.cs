using static System.Console;
int x=int.Parse(ReadLine());
int y=int.Parse(ReadLine());
Write($"{y%10*x}\n{y%100/10*x}\n{y/100*x}\n{x*y}");