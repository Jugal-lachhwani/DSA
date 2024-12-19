#include <iostream>
using namespace std;
int binarysearch(int arr[], int left, int right, int x)
{
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
    if (arr[mid] == x)
        return mid;
    if (arr[mid] < x)
        left = mid + 1;
    if (arr[mid] > x)
        right = mid - 1;
    }
    return -1;
}
int main()
{
    int i;
    cout<<"enter the numbers of elements you want to enter in list :";
    int arr[]={1,3,4,6,7,89,98};
    int x=98;
    int n= sizeof(arr)/sizeof(arr[0]);
    int result = binarysearch(arr,0,n-1,x);
    if(result == -1)
         cout<<x<<" is not present in the list ";
        else
        cout<<x<<" is present at position "<<result + 1;
}
