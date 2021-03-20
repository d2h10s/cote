using static System.Console;
int[] n={3,3,3,4,4,4,5,5,5,6,6,6,7,7,7,8,8,8,8,9,9,9,10,10,10,10};
int t=0;
foreach(var c in ReadLine()) t+=n[c-'A'];
Write(t);