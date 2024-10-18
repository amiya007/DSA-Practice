
#include <bits/stdc++.h>
using namespace std;

void printV(vector<char> s)
{
    for (auto i : s)
    {
        cout << i << " ";
    }
    cout << endl;
}

bool isAnagram(string s, string t)
{
    vector<char> sL;
    vector<char> tL;

    for (int i = 0; i < (s.length() + t.length()); i++)
    {
        if (i < s.length())
            sL.push_back(s[i]);
        else
            tL.push_back(t[i - s.length()]);
    }

    sort(sL.begin(), sL.end());
    sort(tL.begin(), tL.end());

    return sL == tL;
}

int main()
{
    string s = "anagram";
    string t = "nagaram";
    cout << isAnagram(s, t);

    return 0;
}