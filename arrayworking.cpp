#include<iostream>
using namespace std;
int main()
{
    int n;
    int temp=0;
    cout<<"enetr the size of array "<<endl;
    cin>>n;
    int a[n];
    int i,j;
    for(i=0;i<n;i++)
    {
        cout<<"enter the value of array "<<i+1<<endl;
        cin>>a[i];
    }
    for(i=0;i<n/2;i++)
    {
        for(j=n-1;j>=n/2 ;j--)
        {
            if(i<j && i+j == n-1)
            {  
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
            }
        }
    }
     for(i=0;i<n;i++)
    {
        
        cout<<a[i]<<endl;
    }
}