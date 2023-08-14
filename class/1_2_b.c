#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void deleted(int arr[],int index,int n)
{
    for(int i=index;i<n-1;i++)
    {
        arr[i]=arr[i+1];
    }
    
}
int main()
{
    int arr[15]={1,3,4,5,7,8,9,11,33,44};
    int capacity=sizeof(arr)/sizeof(arr[0]);
    int n=10;
    int value=88,i;
    printf("before deleted\n");
    for(int i=0;i<n;i++)
    {
        printf(" %d",arr[i]);
    }
    printf("\nafter deleted\n");
    
    deleted(arr,2,n);
    n--;
    for(int i=0;i<n;i++)
    {
        printf(" %d",arr[i]);
    }
    
    


    

    

}