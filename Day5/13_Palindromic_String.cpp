/*
Write a function that takes in a non-empty string and that returns a Boolean
representing whether the string is a palindrome. A palindrome is defined as a
string that's written the same forward and backward. Note that single-character
strings are palindromes*/

#include<bits/stdc++.h>
using namespace std;


bool isPal(string str)
{
    int i=0;
    int j=str.length()-1;
    while(i<j)
    {
        if(str[i]!=str[j])
        {
            return false;
        }
        i++;
        j--;
    }
    return true;
}


/* Time Complexity : O(n)
   Space Complexity: O(1)
*/

int main()
{
    cout<<"Enter the string: ";
    string str;
    cin>>str;
    if(isPal(str))
    {
        cout<<"Given String is palindromic "<<endl;
    }
    else
    {
        cout<<"Given string is not plaindromic  "<<endl;
    }
    return 0;
    
}
