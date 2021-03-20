using static System.Console;
int n = int.Parse(ReadLine());
var s = new System.Text.StringBuilder();
for(int i=n; i>0;i--) s.Append($"{i}\n");
Write(s);