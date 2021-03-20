using static System.Console;
string[] l={"c=","c-","dz=","d-","lj","nj","s=","z="};
var s=ReadLine();
foreach(var i in l) {s=s.Replace(i,"a");}
Write(s.Length);