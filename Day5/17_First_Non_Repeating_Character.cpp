/*
Write a function that takes in a string of lowercase English-alphabet letters and
returns the index of the string's first non-repeating character. The first nonrepeating character is the first character in a string that occurs only once. If the
input string doesn't have any non-repeating characters, your function should
return -1.*/

#include<bits/stdc++.h>
using namespace std;


// In brute forece we need to traverse twice the string
// if the string is extremely long, we wouldn't want to traverse it twice, so instead only 
//storing just counts of a char, we also store the index, and then traverse the hash table.
class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char, pair<int, int>> m;  // like ['a' : {1,0}]
        int idx = s.size();
        for (int i = 0; i < s.size(); i++) {
            m[s[i]].first++;
            m[s[i]].second = i;
        }
        for (auto &p : m) {
            if (p.second.first == 1) idx = min(idx, p.second.second);
        }
        return idx == s.size() ? -1 : idx;
    }
};

/* Time Complexity : O(n)
Space Spmlexity: O(1)*/

int main()
{
    cout<<"Enter String: ";
    string str;
    cin>>str;
    Solution obj;
    cout<<obj.firstUniqChar(str)<<endl;
    return 0;

}