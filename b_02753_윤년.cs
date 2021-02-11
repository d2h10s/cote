using static System.Console;
int s=int.Parse(ReadLine());
Write(s%4==0&&s%100!=0||s%400==0?1:0);