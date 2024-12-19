#include<iostream>
using namespace std;
int insertion(int arr[],int n)
{
    int i,key=0,j=0;
    for(i=1;i<n;i++)
    {
        key=arr[i];
        j=i-1;
        while(j>=0 && arr[j]>key)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}
int main()
{
    int n;
    cout<<"enter teh number of elements youu want to input :"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the values "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    insertion(arr,n);
    cout<<"The sorted array is :"<<endl;
     for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
}
