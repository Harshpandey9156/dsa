
#include <bits/stdc++.h>
using namespace std;

int partition(int arr[], int low, int high)
{
    int pivot = arr[low];
    int st = low;
    int end = high;
    int k = high;
    for (int i = high; i > low; i--)
    {
        if (arr[i] > pivot)
            swap(arr[i], arr[k--]);
            else
        
        swap(arr[low], arr[k]);
    }
    

    return k;
}


void quickSort(int arr[], int low, int high)
{

    if (low < high)
    {

        int idx = partition(arr, low, high);

        quickSort(arr, low, idx - 1);
        quickSort(arr, idx + 1, high);
    }
}

void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main()
{
    int arr[] = {5, 12, 25, 32, 54, 5, 78};
    int n = sizeof(arr) / sizeof(arr[0]);
    quickSort(arr, 0, n - 1);
    cout << "sahil" << endl;
    cout << "Sorted array: \n";
    printArray(arr, n);
    return 0;
}
