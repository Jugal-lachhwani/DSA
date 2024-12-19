#include<iostream>
#include<stack>
using namespace std;
int precedence(char x)
{
    if (x == '^')
        return 3;
    if (x == '*' || x == '/')
        return 2;
    if (x == '+' || x == '-')
        return 1;
    return 0;
}
bool isRightAssociative(char op) {
    if (op == '^') {
        return true;
    }
    return false;
}
bool isOperator(char c)
{
    return (c == '+' || c == '-' || c == '*' || c == '/' || c == '^');
}
string intopo(string in)
{
    string ans;
    stack<char> s;
    for (char c : in)
    {
        if (isalnum(c)) {
                ans += c;
        }
        else if (c == '(') {
               s.push(c);
        }
        else if (c == ')') {
                while (!s.empty() && s.top() != '(') {
                ans += s.top();
                s.pop();
            }
            s.pop();
        }
        else if (isOperator(c)) {
            while (!s.empty() && s.top() != '(' &&
                  (precedence(c) < precedence(s.top()) ||
                  (precedence(c) == precedence(s.top()) && !isRightAssociative(c))))
            {
                ans += s.top();
                s.pop();
            }
            s.push(c);
        }
    }
    while (!s.empty()) {
        ans += s.top();
        s.pop();
    }
    return ans;
}
int main()
{
    string r = intopo("a+(((b-c)*(d-e)+f)/g)^(h-j)");
    cout << r << endl;
    return 0;
}
