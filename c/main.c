#include <stdio.h>
#include <stdlib.h>

int comp(const void *elem1, const void *elem2)
{
    int f = *((int *)elem1);
    int s = *((int *)elem2);
    if (f > s)
        return 1;
    if (f < s)
        return -1;
    return 0;
}

int main(int argc, char *argv[])
{
    int n = atoi(argv[1]);
    int *array = (int *)malloc(n * sizeof(int));

    int temp = 0;

    for (int i = 0; i < n; i++)
    {
        temp = (rand() % n) + 1;
        array[i] = temp;
    }

    qsort(array, n, sizeof(int), comp);

    free(array);
    return 0;
}