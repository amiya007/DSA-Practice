#include <bits/stdc++.h>
using namespace std;
int sjtGetAvgWaitingTime(vector<int> timeList)
{
    sort(timeList.begin(), timeList.end());
    int totalTimetaken = 0;
    int waitingTime = 0;
    for (int i = 0; i < timeList.size(); i++)
    {
        waitingTime += totalTimetaken;
        totalTimetaken += timeList[i];
        cout << totalTimetaken << " " << waitingTime << endl;
    }
    return waitingTime / timeList.size();
}
int main()
{
    vector<int> timeList = {4, 3, 7, 1, 2};
    cout << sjtGetAvgWaitingTime(timeList);
    return 0;
}