#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void printArr(int n, int *arr)
{
    printf("[ ");

    int i;
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("]\n\n");
}

float avgArr(int n, int *arr)
{
    int avg = 0;

    int i;
    for (i = 0; i < n; i++)
    {
        avg += arr[i];
    }

    return (float) avg / n;
}

void copyArr(int n, int *arr, int *copy)
{
    int i;
    for (i = 0; i < n; i++)
    {
        copy[i] = arr[i];
    }
}

int main()
{
    srand(time(NULL));

    int arr[5];

    int i;
    for (i = 0; i < 5; i++)
    {
        arr[i] = rand();
    }

    printArr(5, arr);

    printf("avg: %f\n\n", avgArr(5, arr));

    int copy[5];
    copyArr(5, arr, copy);
    printArr(5, copy);
    
    return 0;
}