#include<iostream>
#include <bits/stdc++.h>
using namespace std;
void countingsort(int a[],int k,int n)
{
    
    int c[k];
    for(int i=0; i<k; i++)
        c[i] = 0;
    for( int i = 0; i < n; i++)
    {
        c[a[i]]++;
    }
    // for(int i = 0; i < k; i++)
    //     cout<<c[i]<<" ";
    // My Concept
    // int v;
    // int b=0;
    // for(int i = 0; i < k; i++)
    // {
    //     v = c[i];
    //     for(int j = 0; j < v; j++){
    //         a[b] = i;
    //         b++;
    //     }
        
    // }
    // System's concept
    for(int i = 1; i < k; i++)
    {
        c[i] = c[i] + c[i-1];
    }
    int b[n];
    for(int i = n-1; i >= 0; i--)
    {
        b[c[a[i]] - 1] = a[i];
        c[a[i]]--;
    }
    for(int i = 0; i < n; i++)
    {
        a[i] = b[i];
    }

    cout<<endl;
    for(int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
 
}
int main()
{
    int a[] = {5,3,8,2,6,3,4,2,4,6,1,3,1,4,6};
     int n = sizeof(a)/sizeof(a[0]);
     cout<<n<<endl;
    int k = *max_element(a, a+n);
    cout<<k<<endl;
    countingsort(a,k+1,n);
}