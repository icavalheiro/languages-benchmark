using System;

var n = int.Parse(Environment.GetCommandLineArgs()[1]);
var array = new int[n];

var randomGen = new Random();
for (int i = 0; i < n; i++)
{
    array[i] = randomGen.Next(0, n);
}

Array.Sort(array);