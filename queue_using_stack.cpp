#include <bits/stdc++.h>

using namespace std;
class MyQueue
{
public:
    MyQueue()
    {
    }
    stack<int> s1;
    stack<int> s2;
    void push(int x)
    {
        while (!s1.empty())
        {
            s2.push(s1.top());
            s1.pop();
        }
        s1.push(x);
        while (!s2.empty())
        {
            s1.push(s2.top());
            s2.pop();
        }
    }

    int pop()
    {
        int x = s1.top();
        s1.pop();
        return x;
    }

    int peek()
    {
        return s1.top();
    }

    bool empty()
    {
        return s1.empty();
    }
};
int main()
{
    MyQueue st;
    st.push(5);
    st.push(15);
    st.push(45);
    st.push(55);
    cout << st.pop() << " Popped from stack" << endl;
    cout << "top element of stack " << st.peek() << endl;

    return 0;
}