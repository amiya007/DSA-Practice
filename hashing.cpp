#include <iostream>
using namespace std;

int main()
{
    int n;
    int q;
    cin >> n;
    int arr[25];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int hash[25] = {0};
    for (int i = 0; i < n; i++)
    {
        hash[arr[i]] += 1;
    }

    cin >> q;
    for (int i = 0; i < q; i++)
    {
        int n;
        cin >> n;
        cout << hash[n] << endl;
    }

    return 0;
}