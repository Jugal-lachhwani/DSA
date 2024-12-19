#include<iostream>
using namespace std;
int f=-1;
int r=-1;
int q[5];
int insertdata(int val)
{
    if(f == -1)
        f=0;
    if(r == 5)
    {
        cout<<"Overflow";
        return 0;
    }
    else{
        r = r+1;
        q[r]=val;
    }
    return 0;
}
int deletedata()
{
    if(f == -1)
    {
        cout<<"underflow";
    }
    cout<<q[f];
    f=f+1;
}
int main()
{
    insertdata(3);
     insertdata(7);
      insertdata(5);
       insertdata(4);
       insertdata(4);
       insertdata(4);
       insertdata(4);
    deletedata();
    deletedata();
     deletedata();
     deletedata();
     deletedata();
    //cout<<deletedata()<<endl<<deletedata()<<endl<<deletedata();
}
