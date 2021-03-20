using static System.Console;
using System.Linq;
var s=ReadLine().Split().Select(decimal.Parse).ToArray();
Write((int)(s[1]>=s[2]?-1:s[0]/(s[2]-s[1])+1));