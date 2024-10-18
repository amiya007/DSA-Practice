#include <bits/stdc++.h>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int q;
    cin >> q;
    unordered_map<string, int> chHash;
    vector<int> op;
    int i = 0;
    int type;
    string chName;
    int inputCh;
    while (i < q)
    {
        cin >> type >> chName >> inputCh;
        if (type == 1)
            chHash[chName] += inputCh;
        if (type == 2)
        {
            if (chHash[chName] >= inputCh)
            {
                op.push_back(inputCh);
                chHash[chName] -= inputCh;
            }
            else
                op.push_back(chHash[chName]);
        }
        i++;
    }
    for (auto i : op)
        cout << i << endl;
    return 0;
}