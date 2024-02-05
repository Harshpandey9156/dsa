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
void insertion(int arr[],int index,int size,int element)
{
    for(int i=size-1 ;i>=index;i--)
    {
        arr[i+1]=arr[i];
    }
    arr[index]=element;
    //return 1;
}




int main ()
{
    int arr[10]={3,4,5,2,7,89};
    int size=6;
    // display(arr, size);
      deletetion(arr,3,6);
      //
      size-=1;
      insertion(arr, 3,6,33);
      size+=1;
      display(arr,size);

}