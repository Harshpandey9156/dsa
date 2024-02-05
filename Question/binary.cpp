#include <bits/stdc++.h>
#include <fstream>
using namespace std;
 int binarysearch(int arr[],int key, int size)
 {
    int s=0,e=size-1;
    int mid=(s+e)/2;
    //int ans=-1;
    while(s<=e)
    {
        if(arr[mid]==key)
        return mid;
       
         if(arr[mid]>key)
        {
            e=mid-1;

        }
        else 
        {
            s=mid+1;
        }
        mid=(s+e)/2;
        
    }  
    return -1;
 }
int main()
{
int even[6]={2,4,6,8,11,14};
int odd[7]={2,3,4,6,7,9,44} ,key=6 ;
int index=binarysearch(even,7,6 );
cout<<"index of 6 is"<<index<<endl;
//cout<<"enter the array\n";
//for(int i=1;i<=6;i++)
//{
//    cin>>arr[i];
//}
//cout<<"search";

return 0;
}