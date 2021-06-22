// In this program we are going to find the powerset/powerset of the give array
/*
Write a function that takes in an array of unique integers and returns its
powerset. The powerset P(X) of a set X is the set of all subsets of X. For
example, the powerset of [1,2] is [[], [1], [2], [1,2]].
*/

#include<bits/stdc++.h>
using namespace std;

//vector<vector<string>>final;

void solve(string input,string output)
{
    if(input.length()==0)
    {
        cout<<"[";
        for(int i=0;i<output.size();i++)
        {
            cout<<output[i]<<", ";
        }
        cout<<"]"<<", ";
        return;
    }

    // Here we are making the choice diagram , either the element is take or not

    string op1=output;                  // string one 
    string op2=output;                  // String two
    op2.push_back(input[0]);            // append in second string
    input.erase(input.begin()+0);
    solve(input,op1);                   // Call the  function to newly created string i.e. op1
    solve(input,op2);                   // Call the  function to newly created string i.e. op2
    return;
}

int32_t main()
{
    vector<int>v{1,2,3};
    int n=v.size();
    string str="";
    for(auto ele:v)
    {
        str.push_back(ele+'0');
    }
    string op="";
    cout<<"[";
    solve(str,op);
    cout<<"]";
}
