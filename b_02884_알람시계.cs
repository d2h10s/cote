using static System.Console;
var s=ReadLine().Split();
var (h,m)=(int.Parse(s[0]),int.Parse(s[1])-45);
if(m<0){h=h-1<0?h+23:h-1;m+=60;}
Write($"{h} {m}");