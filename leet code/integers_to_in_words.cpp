#include <bits/stdc++.h>
using namespace std;
string numberToWords(int num)
{
    string ans;
    // map<int, string> d = {
    //     0 : "Zero",
    //     1 : "One",
    //     2 : "Two",
    //     3 : "Three",
    //     4 : "Four",
    //     5 : "Five",
    //     6 : "Six",
    //     7 : "Seven",
    //     8 : "Eight",
    //     9 : "Nine",
    //     10 : "Ten",
    //     11 : "Eleven",
    //     12 : "Twelve",
    //     13 : "Thirteen",
    //     14 : "Fourteen",
    //     15 : "Fifteen",
    //     16 : "Sixteen",
    //     17 : "Seventeen",
    //     18 : "Eighteen",
    //     19 : "Nineteen",
    //     20 : "Twenty",
    //     30 : "Thirty",
    //     40 : "Forty",
    //     50 : "Fifty",
    //     60 : "Sixty",
    //     70 : "Seventy",
    //     80 : "Eighty",
    //     90 : "Ninety",
    //     100 : "Hundred",
    //     1000 : "Thousand",
    //     1000000 : "Million",
    //     1000000000 : "Billion"
    // };
    int temp = num;
    vector<int> digits;
    
    while (temp != 0)
    {
        digits.push_back(temp % 10);
        temp = temp / 10;
    }
    reverse(digits.begin(), digits.end());
}

int main()
{

    return 0;
}
