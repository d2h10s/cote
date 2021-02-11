using System;
using System.Linq;
var s=Console.ReadLine().Split().Select(int.Parse).ToArray();
Console.Write(Math.Ceiling((s[2]-s[0])*1d/(s[0]-s[1]))+1);