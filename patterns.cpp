#include <iostream>
using namespace std;

// int recursionBinarySearch(int a, int target, int n)
// {
//     int low = 0;
//     int high = n - 1;
//     int mid = (low + high) / 2;
//     if (low > high)
//     {
//         /* code */
//         return -1;
//     }
//     if (a[mid] > a[low])
//     {
//         /* code */
//     }
// }

void pattern1(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
}
void pattern2(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
}
void pattern3(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i;
        }
        cout << "\n";
    }
}
void pattern4(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout << "\n";
    }
}
void pattern5(int n)
{
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
}
void pattern6(int n)
{
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout << "\n";
    }
}
void pattern7(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = n; j > 0; j--)
        {
            if (j <= i)
            {
                /* code */
                cout << "*";
            }
            else
            {
                /* code */
                cout << " ";
            }
        }
        for (int k = 1; k <= n; k++)
        {
            if (k < i)
            {
                /* code */
                cout << "*";
            }
            else
            {
                /* code */
                cout << " ";
            }
        }
        cout << "\n";
    }
}
void pattern8(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j >= i)
            {
                /* code */
                cout << "*";
            }
            else
            {
                /* code */
                cout << " ";
            }
        }
        for (int k = n; k >= 0; k--)
        {
            if (k > i)
            {
                /* code */
                cout << "*";
            }
            else
            {
                /* code */
                cout << " ";
            }
        }
        cout << "\n";
    }
}

int main()
{
    int x;
    cin >> x;
    pattern7(x);
    return 0;
}