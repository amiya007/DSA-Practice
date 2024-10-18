#include <bits/stdc++.h>
using namespace std;

int assignCookie(vector<int> greedFactors, vector<int> cookies)
{
    int childrenWithCookie = 0;
    sort(greedFactors.begin(), greedFactors.end());
    sort(cookies.begin(), cookies.end());
    int i = 0;
    int j = 0;
    while (i < greedFactors.size() && j < cookies.size())
    {
        if (cookies[j] >= greedFactors[i])
        {
            ++childrenWithCookie;
            ++j;
            ++i;
        }
        else
            ++j;
    }

    return childrenWithCookie;
}
int main()
{
    vector<int> greedFactors = {1, 5, 3, 3, 4};
    vector<int> cookies = {4, 2, 1, 2, 1, 3};
    cout << assignCookie(greedFactors, cookies);
    return 0;
}