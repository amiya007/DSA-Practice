#include <bits/stdc++.h>
using namespace std;

int jumpGame(vector<int> lst)
{
    int i = 0;
    int max = 0;
    for (int i = 0; i < lst.size(); i++)
    {
        int temp = i + lst[i];
        cout << max << endl;
        if (max > temp)
        {
            continue;
        }
        else if (i > max)
        {
            break;
        }
        else
            max = i + lst[i];
    }
    return max > lst.size() - 1 ? lst.size() - 1 : max;
}

int main()
{
    vector<int> lst = {1, 2, 3, 1, 1, 0, 2, 5};
    cout << jumpGame(lst);
    return 0;
}