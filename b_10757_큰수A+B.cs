using static System.Console;
using System.Linq;
using System.Numerics;
Write(ReadLine().Split().Select(BigInteger.Parse).Aggregate((x,y)=>x+y));