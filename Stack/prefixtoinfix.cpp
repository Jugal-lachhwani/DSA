#include<iostream>
#include<stack>
#include<algorithm>
using namespace std;
bool isOperator(char c)
{
    return (c == '+' || c == '-' || c == '*' || c == '/' || c == '^');
}
string posttoin(string post)
{
    stack<string> s;
    //reverse(post.begin(),post.end());
    cout<<post;
    for(char str : post)
    {
        if(isalnum(str))
        {
            string op(1,str);
            s.push(op);
            cout<<s.top()<<endl;
        }
        else if(isOperator(str))
        {
            string op2 = s.top();
            s.pop();
            string op1 = s.top();
            s.pop();
            string ans = "(" + op1 + str + op2 + ")";
            s.push(ans);
        }
    }
    return s.top();
}
int main()
{
    string postfix = "cab+*";
    cout<<posttoin(postfix);
}

