using static System.Console;        
int n=int.Parse(ReadLine());
for(int i=0;i<n;i++)
{
    int a=0,g=0;
    var s=ReadLine();
    foreach(var c in s)
    {
        g+=c=='O'?++a:a=0;
    }
    WriteLine(g);
}