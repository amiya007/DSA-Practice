#include <bits/stdc++.h>
using namespace std;

bool lemonadeChange(vector<int> bills)
{
    int count5 = 0;
    int count10 = 0;
    int count20 = 0;
    for (int i = 0; i < bills.size(); i++)
    {
        if (bills[i] == 5)
        {
            ++count5;
        }
        else if (bills[i] == 10)
        {
            ++count10;
            if (count5 >= 1)
                --count5;
            else
                return false;
        }
        else
        {
            ++count20;
            if (count5 >= 3 || (count5 >= 1 && count10 >= 1))
            {
                if (count5 >= 3)
                {
                    count5 = count5 - 3;
                }
                if (count5 >= 1 && count10 >= 1)
                {
                    --count5;
                    --count10;
                }
            }
            else
                return false;
        }
    }
    return true;
}

int main()
{
    vector<int> bills = {5, 5, 10, 10, 20};
    cout << lemonadeChange(bills);
    return 0;
}