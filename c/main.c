#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

static void int_swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

static void quick_sort(int *array, int leftPos, int rightPos)
{
    int initialLeftPos = leftPos;
    int initialRightPos = rightPos;
    bool direction = true;
    int pivot = rightPos;

    while ((leftPos - rightPos) < 0)
    {
        if (direction)
        {
            if (array[pivot] < array[leftPos])
            {
                int_swap(&array[pivot], &array[leftPos]);
                pivot = leftPos;
                rightPos--;
                direction = !direction;
            }
            else
                leftPos++;
        }
        else
        {
            if (array[pivot] <= array[rightPos])
                rightPos--;
            else
            {
                int_swap(&array[pivot], &array[rightPos]);
                leftPos++;
                pivot = rightPos;
                direction = !direction;
            }
        }
    }

    if (pivot - 1 > initialLeftPos)
    {
        quick_sort(array, initialLeftPos, pivot - 1);
    }

    if (pivot + 1 < initialRightPos)
    {
        quick_sort(array, pivot + 1, initialRightPos);
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

    quick_sort(array, 0, n - 1);
    free(array);
    return 0;
}