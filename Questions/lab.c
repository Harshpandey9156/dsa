#include<stdio.h>
void display(int arr[] , int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ",arr[i]);
    }
    
}
void deletetion(int arr[],int index,int size)
{
 for (int i = index; i < size-1; i++)
    {
        arr[i] = arr[i + 1];
    }
}
void insertion(int arr[],int index)
{
    for()
}