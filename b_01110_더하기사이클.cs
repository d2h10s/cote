using static System.Console;
int n=int.Parse(ReadLine()),r=n,c=0;
do{
    r=(r%10+r/10)%10+r%10*10;
    c++;
}while(n!=r);
Write(c);