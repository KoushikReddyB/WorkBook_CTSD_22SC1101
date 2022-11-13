/* Given an array of integer's nums, sort the array ...
pg 233 / 368 ...
NOTE: This program is also known as "Bubble Sort"*/
#include<stdio.h>
int swap(int*, int*);
int swap(int *p1, int *p2)
{
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}
int bubble_sort(int, int[]);
int bubble_sort(int size, int a[])
{
    int i, j, temp;
    for(i=0; i<size-1; i++)
    {
        for(j=0; j<size-i-1; j++)
        {
            if(a[j]>a[j+1])
            {
                swap(&a[j], &a[j+1]);
            }
        }
    }
            
}
int display(int, int[]);
int display(int size, int array[])
{
    for(int i=0; i<size; i++)
    {
        printf("array[%d]: %d\n", i, array[i]);
    }
}
int main()
{
    int array[100], size;
    printf("enter the size of array: ");
    scanf("%d", &size);
    printf("enter the elements of array:\n");
    for(int i=0; i<size; i++)
    {
        printf("enter array[%d]: ", i);
        scanf("%d", &array[i]);
    }
    bubble_sort(size, array);
    printf("array after sorting:\n");
    display(size, array);
    return 0;
    
    
}
