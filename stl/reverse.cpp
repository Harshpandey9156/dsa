#include <iostream>
#include <vector>
using namespace std;
vector<int> reverseArray(vector<int> A)
{
    int start = 0;
    int end = A.size() - 1;
    // Swap elements from the start and end until they meet in the middle
    while (start < end)
    {
        swap(A[start], A[end]);
        start++;
        end--;
    }
    return A;
}
int main()
{
    int N;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }
    vector<int> result = reverseArray(A);
    for (int i = 0; i < N; i++)
    {
        cout << result[i] << " ";
    }
    return 0;
}