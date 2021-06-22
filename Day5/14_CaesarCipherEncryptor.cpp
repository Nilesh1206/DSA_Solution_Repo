// In this program we are going to find the next cipher encrypted text by using thr provided key

/*
Given a non-empty string of lowercase letters and a non-negative integer
representing a key, write a function that returns a new string obtained by
shifting every letter in the input string by k positions in the alphabet, where k
is the key. Note that letters should "wrap" around the alphabet; in other
words, the letter z shifted by one returns the letter a
*/

#include<bits/stdc++.h>
using namespace std;


int main()
{
    cout<<"Enter the string : ";
    string str;
    cin>>str;
    cout<<"Enter key: ";
    int key;
    cin>>key;

    // I sloved this question by using hashing , whith O(n) time
    map<int,char>mp1;              // First hash function to store index wise characters
    map<char,int>mp2;              // Second hash function to store character wise index
    int num=0;                    // starting index of storing

    // Storing the alphabets in hash , as discussed earlier
    for(char alpha='a'; alpha<='z';alpha++)
    {
        mp1[num]=alpha;
        mp2[alpha]=num;
        num++;
    }

    // res string to store the final result
    string res="";
    for(int i=0;i<str.length();i++)
    {
        int pos=mp2[str[i]];            // Finding the position of current index
        int next_pos=pos+key;           // Adding the key  , and checking its existance in hash function
        if(next_pos<0)                  // If key is negative
        {
            int virtu=25+next_pos+1;
            res+=mp1[virtu];
        }
        else
        {
            if(next_pos<=25)
            {
                res+=mp1[next_pos];
            }
            else
            {
                int start_pos=next_pos-25-1;
                res+=mp1[start_pos];
            }
        }
    }
    //Final result of the given string 
    cout<<"Final Encrypted key: ";
    cout<<res<<endl;
    return 0;
}

/*
Time Complexity: O(n)
Space Coplexity: O(n)
*/