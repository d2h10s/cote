using static System.Console;
using System.Linq;
var s = ReadLine().GroupBy(c=>char.ToUpper(c)).ToDictionary(k=>k.Key,v=>v.Count());
if(s.Count(x=>x.Value==s.Max(d=>d.Value))!=1) Write('?');
else Write(s.First(x=>x.Value==s.Max(d=>d.Value)).Key);