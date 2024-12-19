#include<iostream>
using namespace std;
int main()
{
    string str;
    cout<<"Enter Something..."<<endl;
    cin>>str;
    int i=0;
    int q=0,w=0,e=0;
    while(i<str.length())
    {
        if(str[i] == '(' && q>-1)
            q++;
        else if(str[i] == ')')
            q--;
        else if(str[i] == '[' && w>-1)
            w++;
        else if(str[i] == ']' )
            w--;
        else if(str[i] == '{' && e >-1)
            e++;
        else if(str[i] == '}')
            e--;
        i++;
    }
    if(q==0 && w==0 && e==0)
        cout << "True" << endl;
    else
        cout << "False" << endl;
}
