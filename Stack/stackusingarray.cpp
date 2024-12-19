#include<iostream>
using namespace std;
int p = -1,s[5];
int push(int v)
{
    if(p==5)
    {
        cout<<"overflow";
        return 0;
    }
    else
        p=p+1;
        s[p]=v;
}
int pop()
{
    if(p==-1)
    {
        cout<<"No data in stack";
    }
    else
    {
        cout<<s[p];
        p = p-1;
    }
}
int main()
{
    push(4);
    push(5);
    pop();

    pop();
    pop();
}
