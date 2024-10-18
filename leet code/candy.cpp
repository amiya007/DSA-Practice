#include <bits/stdc++.h>
using namespace std;

int candy(vector<int> &ratings)
{
    int minCandy = 0;
    int n = ratings.size();
    vector<int> candies(n - 1, 1);
    for (int i = 1; i < n; i++)
    {
        if (ratings[i] != ratings[i + 1])
        {
            if (ratings[i] > ratings[i + 1] && candies[i] <= candies[i + 1])
            {
                candies[i] = ++candies[i + 1];
            }
            else
            {
                candies[i + 1] = ++candies[i];
            }
        }
        if (ratings[i - 1] != ratings[i])
        {
            if (ratings[i - 1] > ratings[i] && candies[i - 1] <= candies[i])
            {
                candies[i - 1] = ++candies[i];
            }
            else
            {
                candies[i] = ++candies[i - 1];
            }
        }
        else
            continue;
    }
    for (auto i : candies)
    {
        minCandy += i;
    }
    return minCandy;
}

int main()
{
    vector<int> x = {1,0,2};
    cout << candy(x);
    return 0;
}