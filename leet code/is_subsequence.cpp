#include <bits/stdc++.h>
using namespace std;

bool isSubsequence(string s, string t)
{
    if (s.empty())
        return true;

    int count = 0;
    for (const char c : t)
    {
        if (s[count] == c)
            ++count;

        if (count == s.length())
            return true;
    }

    return false;
}

int main()
{
    string s = "abc";
    string t = "ahbgdc";
    cout << isSubsequence(s, t);
    return 0;
}