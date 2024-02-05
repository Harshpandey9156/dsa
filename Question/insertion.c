#include <stdio.h>
void display(int arr[],int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\n",arr[i]);
    }
    
}
int insertion(int arr[], int element , int size ,int index,int capacity)
{
    if(size>=capacity)
    {
        return -1;
    }
     
  for (int i = size-1; i >=index ; i--)
  {
    arr[i+1]=arr[i];
  }
  arr[index]=element;
  return 1;
     
  
}
int main()  
{
    int arr[100]={1,4,2,5,56};
    int size=5,element =69;
    //display(arr,size);
    insertion(arr,element,size,2,100);
    size +=1;
        display(arr,size);





}