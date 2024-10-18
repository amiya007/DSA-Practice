#include <bits/stdc++.h>
using namespace std;

vector<pair<int, int>> insertInterval(vector<pair<int, int>> intervals, pair<int, int> intervalInsert)
{
    vector<pair<int, int>> ans;
    int i = 0;
    while (i < intervals.size())
    {
        if (intervals[i].second < intervalInsert.first)
        {
            ans.push_back(intervals[i]);
            ans.push_back(intervalInsert);
            ++i;
        }
        else if (intervals[i].second >= intervalInsert.first)
        {
            ans.push_back(make_pair(intervals[i].first, intervalInsert.second));
            ++i;
        }
    }
    return ans;
}

int main()
{
    vector<pair<int, int>> intv = {{1, 2}, {6, 8}, {9, 11}};
    pair<int, int> interval = make_pair(2, 5);
    vector<pair<int, int>> x = insertInterval(intv, interval);
    // x = {{1, 5},{6, 8},{9, 11}}
    for (auto i : x)
    {
        cout << i.first << " " << i.second << endl;
    }
    return 0;
}