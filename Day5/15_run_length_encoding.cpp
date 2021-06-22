/*
Write a function that takes in a non-empty string and returns its run-length
encoding. From Wikipedia, "run-length encoding is a form of lossless data
compression in which runs of data are stored as a single data value and count,
rather than as the original run." For this problem, a run of data is any sequence
of consecutive, identical characters. So, the run "AAA" would be run-lengthencoded as "3A". To make things more complicated, however, the input string
can contain all sorts of special characters, including numbers. And since encoded
data must be decodable, this means that we can't naively run-length-encode
long runs. For example, the run "AAAAAAAAAAAA" (12 A’s), can't naively be
encoded as "12A", since this string can be decoded as either "AAAAAAAAAAAA"
or "1AA". Thus, long runs (runs of 10 or more characters) should be encoded in
a split fashion; the aforementioned run should be encoded as "9A3A".
*/


#include <bits/stdc++.h>
using namespace std;

void Shrink(string str)
{
	int n = str.length();
	for (int i = 0; i < n; i++) {
		int count = 1;
		while (i < n - 1 && str[i] == str[i + 1]) {
			count++;
			i++;
		}
        if(count>=10)
        {
            int ct=count-9;
            cout<<9<<str[i]<<ct<<str[i];
        }
        else
        {
		    cout <<count<<str[i];
        }
	}
}

/*
Time Complexity : O(n)
*/

int main()
{
    cout<<"Enter string: ";
	string str ;
    cin>>str;
	Shrink(str);
	return 0;
}
