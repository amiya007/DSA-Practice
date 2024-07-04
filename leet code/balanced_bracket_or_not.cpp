#include <iostream>
#include <vector>
#include <stack>
using namespace std;

bool bracketBalancedOrnot(string str)
{
    stack<char> st;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == '(' || str[i] == '{' || str[i] == '[')
        {
            st.push(str[i]);
        }
        else
        {
            if (!st.empty())
            {

                if ((str[i] == ')' && st.top() == '(') || (str[i] == '}' && st.top() == '{') || (str[i] == ']' && st.top() == '['))
                {
                    st.pop();
                }
            }
            else
            {
                return false;
            }
        }
    }
    return st.empty() ? true : false;
}

int main()
{
    string exp = "{()}";
    cout << (bracketBalancedOrnot(exp) ? "balanced" : "not balanced");
    return 0;
}