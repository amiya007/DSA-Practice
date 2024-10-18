#include <bits/stdc++.h>
using namespace std;

string rhymingWord(vector<string> words, string givenWord)
{
    pair<int> ans = make_pair(0, 0); // (freq, index)
    for (int i = 0; i < words.size(); i++)
    {
        if (words[i] == givenWord)
            continue;

        int j = words[i].length();
        int k = givenWord.length();
        int freq = 0;
        while (j >= 0 && k >= 0)
        {

            if (words[i][j] == givenWord[j])
                freq++;
            if (freq > ans.first)
            {
                ans.first = freq;
                ans.second = i;
            }

            else
            {
                freq = 0;
                break;
            }
            j--;
            k--;
        }
    }
}
int main()
{

    return 0;
}