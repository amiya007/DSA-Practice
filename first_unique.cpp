#include <bits/stdc++.h>
using namespace std;
int firstUniqChar(string s)
{
    int index = 0;
    unordered_map<int, int> hashTab;
    for (int i = 0; i < s.length(); i++)
    {
        hashTab[int(s[i])]++;
    }

    return index;
}
int main()
{
    string a = "aabb";
    string b = "leetcode";

    cout << firstUniqChar(a);
    cout << firstUniqChar(b);
    return 0;
}