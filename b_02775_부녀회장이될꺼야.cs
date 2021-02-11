using static System.Console;
int N=int.Parse(ReadLine());
var v=new int[15, 15];
for(int i=1;i<15;i++)v[0,i]=i;
for(int i=1;i<15;i++){int s=0;for(int j=1;j<15;j++){s+=v[i-1,j];v[i,j]=s;}}
for(int i=0;i<N;i++)WriteLine(v[int.Parse(ReadLine()),int.Parse(ReadLine())]);