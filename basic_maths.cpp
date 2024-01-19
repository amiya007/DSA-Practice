#include <iostream>
using namespace std;

void extraction_of_digits_and_no_of_digit_recursion(int n, int &count)
{
    // Using Recursion
    if (n >= 0 && n < 10)
    {
        cout << n;
        count++;
    }
    else
    {
        cout << n % 10 << "\n";
        n = n / 10;
        count++;
        extraction_of_digits_and_no_of_digit_recursion(n, count);
    }
}

void extraction_of_digits_and_no_of_digit_loop(int n)
{
    int count = 0;
    while (n > 0)
    {
        n % 10 == 0 ? cout << "" : cout << n % 10 << "\n";
        n = n / 10;
        count++;
    }
    cout << "No of Digits " << count;
}

int main()
{
    int count = 0;
    int x;
    cin >> x;
    // extraction_of_digits_and_no_of_digit_recursion(x, count);
    // cout << "\nNo of Digits " << count;
    extraction_of_digits_and_no_of_digit_loop(x);
    return 0;
}