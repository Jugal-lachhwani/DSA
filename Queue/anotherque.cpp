#include<iostream>
using namespace std;
int r=0,h=0;
int que(int q[],int a)
{
    if(r==0)
    {
        q[0]=a;
        r++;
    }
    else
    {
        q[r]=a;
        r++;
    }
}
int dque(int q[])
{
    cout<<q[h];
    h++;
}
int main()
{
    int q[10];
    que(q,5);
    que(q,9);
    dque(q);
    cout<<endl;
    dque(q);
}
