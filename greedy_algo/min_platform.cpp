#include <bits/stdc++.h>
using namespace std;

int minPlatform(vector<int> arrival, vector<int> depart)
{
    vector<int> platformDepartList = {0};
    int plaformNo = platformDepartList.size();
    for (int i = 1; i < arrival.size(); i++)
    {
        if (depart[platformDepartList.front()] < arrival[i])
        {
            platformDepartList.pop_back();
            platformDepartList.push_back(i);
        }
        else if (> arrival[i])
        {
        }
    }

    return plaformNo;
}

int main()
{
    vector<int> arrival = {900, 945, 955, 1100, 1500, 1800};
    vector<int> depart = {920, 1100, 1130, 1150, 1900, 2000};
    cout << minPlatform(arrival, depart);
    return 0;
}