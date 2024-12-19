#include<iostream>
using namespace std;
int main()
{
    int i,j;
    int r1,c1,r2,c2;
    cout<<"enter the rows and column of 1st matrix";
    cin>>r1>>c1;
    cout<<"enter the rows and column of 2nd matrix";
    cin>>r2>>c2;
    if(r1!=r2 || c1 != c2)
    {
        cout<<"we cannot add the atrices";
    }
    else
    {
    int a[r1][c1],b[r2][c2];
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            cout<<"enter the value of "<<i+1 <<j+1<<endl;
            cin>>a[i][j];
        }
    }
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            cout<<"enter the value of "<<i+1 <<j+1<<endl;
            cin>>b[i][j];
        }
    }

    int c[r2][c2];
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
           c[i][j]=a[i][j]+b[i][j];
        }
    }
    cout<<"addition of matrix is "<<endl;
     for(i=0;i<r1;i++)
    {

        for(j=0;j<c1;j++)
        {
            cout<<c[i][j]<<"   ";
        }
        cout<<endl;
    }

    return 0;
}
}
