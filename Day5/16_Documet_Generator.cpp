/*
You're given a string of available characters and a string representing a
document that you need to generate. Write a function that determines if you
can generate the document using the available characters. If you can generate
the document, your function should return true; otherwise, it should return
false. You're only able to generate the document if the frequency of unique
characters in the characters string is greater than or equal to the frequency of
unique characters in the document string. For example, if you're given
characters = "abcabc" and document = "aabbccc" you cannot generate the
document because you're missing one c. The document that you need to
create may contain any characters, including special characters, capital letters,
numbers, and spaces. Note: you can always generate the empty string ("").
*/

#include<bits/stdc++.h>
using namespace std;


int main()
{
    string chars,docs;
    cout<<"Enter Chars String: ";
    getline(cin,chars);
    cout<<endl;
    cout<<"Enter Doc String: ";
    getline(cin,docs);
    map<char,int>mp1;
    map<char,int>mp2;
    for(int i=0;i<chars.length();i++)
    {
        mp1[chars[i]]++;
    }
    for(int i=0;i<docs.length();i++)
    {
        mp2[docs[i]]++;
    }
    int flag=0;
    for(auto it:mp2)
    {
        int ct=it.second;
        if(mp1.find(it.first)!=mp1.end())
        {
            int st=mp1[it.first];
            if(st>=ct)
            {

                continue;
            }
            else
            {
                flag=1;
                break;
            }
        }
        else
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        cout<<"true"<<endl;
    }
    else
    {
        cout<<"false"<<endl;
    }
    return 0;
}

/* Time Complexity: O(n)
Space Complexity: O(n) */