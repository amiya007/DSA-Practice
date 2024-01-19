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
void pattern11(int n)
{
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        int stars = i;
        if (i > n)
            stars = 2 * n - i;

        for (int j = 1; j <= stars; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
}
void pattern12(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            j % 2 == 0 ? cout << "0" : cout << "1";
        }
        cout << "\n";
    }
}
void pattern13(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            j <= i ? cout << j : cout << " ";
        }
        for (int j = n; j > 0; j--)
        {
            j <= i ? cout << j : cout << " ";
        }
        cout << "\n";
    }
}
void pattern14(int n)
{
    int count = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << count;
            cout << " ";
            count++;
        }
        cout << "\n";
    }
}
void pattern15(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            i == 1 || i == n ? cout << "*" : j == 1 || j == n ? cout << "*"
                                                              : cout << " ";
        }
        cout << "\n";
    }
}

void pattern16(int n)
// Cross Pattern(X)
{
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        int count = 1;
        for (int j = 1; j <= 2 * n - 1; j++)
        {
            i == count || i == 2 * n - count ? j == count || j == 2 * n - count ? cout << count : cout << " " : cout << " ";
            count++;
        }

        cout << "\n";
    }
}
void pattern17(int n)
{
    int count = 1;
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        int count = 1;
        for (int j = 1; j <= 2 * n - 1; j++)
        {
            i == count || i == 2 * n - count || j == count || j == 2 * n - count ? cout << n : cout << " ";
            count++;
        }

        cout << "\n";
    }
}
int main()
{
    int x;
    cin >> x;
    pattern17(x);

    return 0;
}