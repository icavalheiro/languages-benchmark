#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <ctime>
#include <algorithm>

using namespace std;

int main(int argc, char *argv[])
{
    int n = atoi(argv[1]);
    int *array = new int[n];

    srand((unsigned)time(0));

    int temp = 0;

    for (int i = 0; i < n; i++)
    {
        temp = (rand() % n) + 1;
        array[i] = temp;
    }

    sort(array, array + n);

    delete[] array;
    return 0;
}