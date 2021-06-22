/*
Write a function that takes in three strings and returns a Boolean representing
whether the third string can be formed by interweaving the first two strings.
To interweave strings means to merge them by alternating their letters
without any specific pattern. For instance, the strings "abc" and "123" can be
interwoven as "alb2c3", as "abc123", and as "ab1c23" (this list is
nonexhaustive). Letters within a string must maintain their relative ordering in
the interwoven string.*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin>>str;
    string str1;
    cin>>str1;
    string str2;
    cin>>str2;
    string new_s=str+str1;
    sort(new_s.begin(),new_s.end());
    sort(str2.begin(),str2.end());
    if(new_s==str2)
    {
        cout<<"true"<<endl;
    }
    else
    {
        cout<<"false"<<endl;
    }
    return 0;

}