#include <iostream>
#include <math.h>
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

int reverseTheNumber(int n)
{
    // If ending with "0" ignore
    int reversedNumber = 0;
    while (n > 0)
    {
        reversedNumber = reversedNumber * 10;
        reversedNumber += n % 10;
        n = n / 10;
    }

    return reversedNumber;
}

bool isPallindrome(int n)
{
    if (n == reverseTheNumber(n))
    {
        return true;
    }
    return false;
}

bool isArmstrongNumber(int n)
{
    int copy_n = n;
    int cubeSum = 0;
    while (n > 0)
    {
        cubeSum += pow(n % 10, 3);
        n = n / 10;
    }
    if (copy_n == cubeSum)
        return true;
    return false;
}

void printDivisorsOfaNumber(int n)
{
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
            cout << i << "\n";
    }
}

void isPrime(int n)
{
    int count = 0;
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            count++;
    }
    count == 1 ? cout << "Prime Number" : cout << "Not a Prime Number";
}

int main()
{
    int count = 0;
    int x;
    cin >> x;
    // isPrime(x);
    int positiveNumber = static_cast<unsigned int>(x);
    cout << positiveNumber;
    return 0;
}