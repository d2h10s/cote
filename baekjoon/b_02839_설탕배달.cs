using static System.Console;
int n=int.Parse(ReadLine()),c=0;
while (n>0)
{
    if(n%5==0)n-=5;
    else if(n%3==0)n-=3;
    else n-=5;
    c++;
}
WriteLine(n>-1?c:-1);