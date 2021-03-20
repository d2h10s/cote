using static System.Console;
int n=int.Parse(ReadLine()),i=1;
while(n>i)n-=i++;
Write(i%2==0?$"{n}/{i-n+1}":$"{i-n+1}/{n}");