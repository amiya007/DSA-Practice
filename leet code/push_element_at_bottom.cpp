#include <iostream>
#include <vector>
#include <stack>
using namespace std;

void addElemntAtBottom(stack<int> &st, int ele)
{

    if (st.empty())
    {
        st.push(ele);
        return;
    }
    int num = st.top();
    st.pop(); 

    addElemntAtBottom(st, ele);
    st.push(num);
}

int main()
{
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    cout << s.size();
    addElemntAtBottom(s, 4);
    cout << s.size();
    return 0;
}