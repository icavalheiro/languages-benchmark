#include <stdio.h>
#include <stdlib.h>

int comp(int *a, int *b)
{
    return *a - *b;
}

static void int_swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

static void fast_sort(int *array, int n)
{
    int r, c;

    //create heap
    for (int i = n - 1; i >= 0; i--)
    {
        for (r = i; r * 2 < n; r = c)
        {
            c = r * 2 + 1;
            if (c < (n - 1) && comp(&array[c], &array[c + 1]) < 0)
                c++;

            if (comp(&array[r], &array[c]) >= 0)
                break;

            int_swap(&array[r], &array[c]);
        }
    }

    //sort
    for (int i = n - 1; i > 0; i--)
    {
        int_swap(&array[0], &array[i]);
        for (r = 0; r * 2 < i; r = c)
        {
            c = r * 2 + 1;
            if (c < i - 1 && comp(&array[c], &array[c + 1]) < 0)
                c++;

            if (comp(&array[r], &array[c]) >= 0)
                break;

            int_swap(&array[r], &array[c]);
        }
    }
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

    fast_sort(array, n);
    free(array);
    return 0;
}