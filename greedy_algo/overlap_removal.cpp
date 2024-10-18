#include <bits/stdc++.h>
using namespace std;

int minOverlapToRemove(vector<pair<int, int>> intervals)
{
    sort(intervals.begin(), intervals.end(), [](const pair<int, int> &a, const pair<int, int> &b)
         { return a.second < b.second; });
    int minOverlap = 0;
    int endTime = intervals[0].second;
    for (int i = 1; i < intervals.size(); i++)
    {
        if (intervals[i].first >= endTime)
        {
            endTime = intervals[i].second;
            cout << intervals[i].first << " " << intervals[i].second << endl;
            continue;
        }
        else
            ++minOverlap;
    }
    return minOverlap;
}

int main()
{
    vector<pair<int, int>> intervals = {{0, 5}, {3, 4}, {1, 2}, {5, 9}, {5, 7}, {7, 9}};
    cout << minOverlapToRemove(intervals);
    return 0;
}