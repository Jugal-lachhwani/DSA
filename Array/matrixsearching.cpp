#include<iostream>
using namespace std;
void Search(int matrix[4][4], int rowm, int coln, int target)
{
    int start=0;
    int flag=-1;
    int mid=0;

    while(start<=rowm)
    {
        mid = start + (rowm-start)/2;
        if(matrix[mid][0]<=target && matrix[mid][coln]>=target)
        {
            flag=1;
            break;
        }
        else if(matrix[mid][0]<target)
        {
            start= mid+1;
        }
        else
        {
            rowm= mid-1;
        }
    }
    if(flag==-1)
    {
        cout<<"Target not Found";
        return;
    }
    else
    {
        start=0;
    int FR=mid;
    while(start<=coln)
    {
        mid= start + (coln-start)/2;
        if(matrix[FR][mid]==target)
        {
            cout<<"\nSearch Found:" <<"("<<FR+1<<","<<mid+1<<")";
            return;
        }else if(matrix[FR][mid]<target)
        {
            start=mid +1;
        }else
        {
            coln=mid-1;
        }
    }
    cout<<"\ntarget not found";
    }
}
int main()
{
    int matrix[4][4]={{1,5,6,7},{8,11,17,36},{37,40,45,50},{52,54,56,58}};
    int target;
    cout<<"Enter target :";
    cin>>target;
    Search(matrix,3,3,target);

    return 0;
}
