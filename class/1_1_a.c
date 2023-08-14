#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void insertion(int arr[],int index,int n,int value)
{
    for(int i=n-1;i>=index;i--)
    {
        arr[i+1]=arr[i];
    }
    arr[index]=value;
}

int main()
{
    int arr[15]={1,3,4,5,7,8,9,11,33,44};
    int capacity=sizeof(arr)/sizeof(arr[0]);
    int n=10;
    int value=88,i;
    printf("before inserted\n");
    for(int i=0;i<n;i++)
    {
        printf(" %d",arr[i]);
    }
    printf("\nafter insertion\n");
    
    insertion(arr,2,n,90);
    n++;
    for(int i=0;i<n;i++)
    {
        printf(" %d",arr[i]);
    }
    
}