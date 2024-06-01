#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void insort();

int array[10];

int main()
{
    printf("plese enter 10 elements : \n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &array[i]);
    }

    insort();

    for (int i = 0; i < 10; i++)
    {
        printf("%d  ", array[i]);
    }
}

void insort()
{
    int key, j;
    for (int i = 1; i < 10; i++)
    {
        key = array[i];
        j = i - 1;
        while (j >= 0 && array[j] > key)
        {
            array[j + 1] = array[j];
            j--;
        }
        array[j + 1] = key;
    }
}