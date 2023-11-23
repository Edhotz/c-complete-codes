#include <stdio.h>

void insertion_sort(int arr[], int n)
{
    int i, key, j;

    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }

        arr[j + 1] = key;
    }
}

void main(void)
{
    int arr[] = {12, 11, 13, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    insertion_sort(arr, n);
    puts("Array ordenado");
    for (int i = 0; i < n; i++)
    {
        printf("%d \t", arr[i]);
    }
}