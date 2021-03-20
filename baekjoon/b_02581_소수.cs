using static System.Console;
var (m,n)=(int.Parse(ReadLine()),int.Parse(ReadLine()));
var p=new bool[1000001];
int s=0,f=0;
for(int i=2;i<=n;i++)if(!p[i]){if(i>=m){if(s==0)f=i;s+=i;}for(int j=i*2;j<=n;j+=i)p[j]=true;}
Write(s==0?$"-1":$"{s}\n{f}");