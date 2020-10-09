#include <stdio.h>

void quickSort(int *a, int left, int right)
{
    int i, j, x, t;

    i = left;
    j = right;
    x = a[(left + right) / 2];

    while (i <= j)
    {

        while (a[i] < x && i < right)
        {
            i++;
        }

        while (a[j] > x && j > left)
        {
            j--;
        }

        if (i <= j)
        {

            t = a[i];
            a[i] = a[j];
            a[j] = t;
            i++;
            j--;
        }
    }

    if (j > left)
    {
        quickSort(a, left, j);
    }
    if (i < right)
    {
        quickSort(a, i, right);
    }
}

int main()
{
    int array[10] = {4, 1, 3, 5, 10, 8, 6, 9, 7, 2};

    quickSort(array, 0, 9);

    for (int i = 0; i < 10; i++)
    {
        printf("%d ", array[i]);
    }

    return 0;
}