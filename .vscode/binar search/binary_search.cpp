#include <bits/stdc++.h>
#include <fstream>
using namespace std;

int binarysearch(int arr[], int size, int key)
{
    int s = 0;
    int e = size - 1;
    int mid = (s + e) / 2;
    while (s <= e)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
          if (key<arr[mid])
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid=(s+e)/2;
    } return -1;
}

int main()
{
    int arr[6]={2,4,6,8,9,11};
    int key=11;
    int size=6;
    cout<<"binary search"<<endl;
    cout<<"the element to search is :  " <<endl;
    cout<<key<< " is present at index : ";
   int t= binarysearch(arr,key,size);
   cout<<t<<endl;


    return 0;
}