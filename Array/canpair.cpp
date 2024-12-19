#include<iostream>
using namespace std;
int main()
{
    int i,j,count=0;
    cout<<"enter the number of elements of array : ";
    int n;
    cin>>n;
    int a[n],v[n];
    for(i=0;i<n;i++)
    {
        v[i] = -1;
    }
    for(i=0;i<n;i++)
    {
        cout<<"enter the elements of array "<<i+1<<endl;
        cin>>a[i];
    }
    cout<<"enter the number to be divide : "<<endl;
    int k;
    cin>>k;
    cout<<"The pairs are : ";
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(v[i] == -1 && v[j] == -1)
            {
            if((a[i]+a[j])%k==0)
            {
                cout<<"("<<a[i]<<","<<a[j]<<") ";
                count++;
                v[i]++;
                v[j]++;
            }
            }
        }
    }
    cout<<endl<<"the number of pairs are "<<count;
}
