#include <stdio.h>

int arr[10];

void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int partition(int arr[], int low, int high)
{

    int pivot = arr[low];
    int start = low + 1;
    int end = high;

    while (1)
    {
        if (start > end)
        {
            swap(&arr[low], &arr[end]);
            break;
        }
        else
        {
            while (arr[start] < pivot)
                start++;
            while (arr[end] > pivot)
                end--;
            if (start < end)
            {
                swap(&arr[start], &arr[end]);
            }
        }
        return end;
    }
}
void quicksort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pivot_location = partition(arr, low, high);

        quicksort(arr, low, pivot_location - 1);
        quicksort(arr, pivot_location + 1, high);
    }
}

int main()
{
    printf("please enter an array of 10 elements\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }

    int n = sizeof(arr) / sizeof(arr[0]);
    quicksort(arr, 0, n - 1);

    printf("sorted array \n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d  ", arr[i]);
    }
}