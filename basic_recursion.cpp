#include <iostream>
using namespace std;

void recursion_1Ton(int n, int &c)
{
    if (c != n)
    {
        c++;
        cout << c << "\n";
        recursion_1Ton(n, c);
    }
    else
    {
        return;
    }
}

int recursion_nto1(int n)
{
    // if (n > 0)
    // {
    //     cout << n << "\n";
    //     recursion_nto1(n - 1);
    // }
    // else
    // {
    //     return;
    // }
    if (n != 0)
    {
        cout << n << endl;
        return recursion_nto1(n - 1);
    }
    return 0;
}
int sumOfN_numbers(int n)
{
    if (n > 0)
    {
        return n + sumOfN_numbers(n - 1);
    }

    return 0;
}

void reverseArray(int arr[], int l, int r, int size)
{

    // cout << "size " << size;
    if (l <= r)
    {
        int temp;
        temp = arr[l];
        arr[l] = arr[r];
        arr[r] = temp;

        l++;
        r--;
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
        reverseArray(arr, l, r, size);
    }
    else
    {
        return;
    }
}

int main()
{
    int x;
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    cin >> x;
    int count = 0;
    // recursion_1Ton(x, count);
    // cout << endl;
    // recursion_nto1(x);
    // cout << sumOfN_numbers(x) << endl;
    reverseArray(a, 0, 8, 9);

    return 0;
}