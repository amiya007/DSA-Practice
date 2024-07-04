#include <bits/stdc++.h>
using namespace std;

bool isPallindrome(string word)
{
    int i = 0;
    int j = word.length() - 1;
    while (i < j)
    {
        if (word[i] == word[j])
        {
            i++;
            j--;
        }
        else
        {
            return false;
        }
    }
    return true;
}

string firstPalindrome(vector<string> &words)
{
    for (int i = 0; i < words.size(); i++)
    {
        if (isPallindrome(words[i]))
        {
            return words[i];
        }
    }
    return "";
}

int main()
{

    return 0;
}