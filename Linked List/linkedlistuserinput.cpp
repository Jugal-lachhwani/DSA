#include<iostream>
using namespace std;
struct node 
{
    int data;
    struct node* next;
};
struct node* head = NULL;
void print(){
struct node* ptr = head;
    while(ptr!= NULL)
    {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
    cout<<endl;
}
createnode(int n)
{
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    temp->data = n;
    temp->next = NULL;
    if (head == NULL)
        head = temp;
    else
    {
        temp->next = head;
        head = temp;
    }
}
int main()
{
    int n,a;
    cout<<"Enter the number of nodes :"<<endl;
    cin>>a;
    for(int i=0;i<a;i++)
    {
    cout<<"Enter the value of elements :"<<endl;
    cin>>n;
    createnode(n);
    }
    cout<<"Created Linked List is: ";
    print();
}