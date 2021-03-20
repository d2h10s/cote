using static System.Console;        
int m=0,c=0;
for(int i=1;i<10;i++)
{
    int a=int.Parse(ReadLine());
    (m,c)=a>m?(a,i):(m,c);
}
Write($"{m}\n{c}");