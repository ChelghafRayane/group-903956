#include <unistd.h>
#include <stdio.h>

void my_swap(int *a, int *b)
{
    int c = *a;
    *a = *b;
    *b = c;
}

void my_sort_intarr(int *array, int size)
{
    int finish = 0;
    for (int i = 0; i < size; i++)
    {
        finish = 1;
        for (int j = 0; j < size - 1 - i; j++)
        {
            if (array[j] > array[j + 1])
            {
                my_swap(&array[j], &array[j + 1]);
                finish = 0;
            }
        }
        if (finish)
            break;
    }
}
