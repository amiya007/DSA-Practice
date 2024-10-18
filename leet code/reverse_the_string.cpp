#include <iostream>
#include <string>
using namespace std;

string reverseWords(string s)
{
    string ans = "";
    int i = 0;
    int j = s.length() - 1;
    string ichar = "";
    string jchar = "";
    int count = 0;
    while (i <= j)
    {
        if (s[i] == ' ' && s[j] == ' ')
        {
            if (i == 0 && j == s.length() - 1)
            {
                ++i;
                --j;
                continue;
            }

            ++i;
            --j;
        }
        else if (s[i] != ' ' && s[j] == ' ')
        {
            ichar+=s[i];
            ++i;
        }
    }
    return ans;
}

int main()
{
    string s = " the sky is blue ";
    // cout << reverseWords(s);
    return 0;
}