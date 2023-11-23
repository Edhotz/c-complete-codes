#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void ft_bubble(int arr[], int n);

void main(void)
{
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);
    ft_bubble(arr, n);
    puts("Array Ordenado: ");
    for(int i = 0; i < n; i++) {
        printf("%d \t", arr[i]);
    }

}
 
void ft_bubble(int arr[], int n)
{
    for(int i = 0; i < n-1; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            if(arr[j] > arr[j - 1])  {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        } 
    }
}