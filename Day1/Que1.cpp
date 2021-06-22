// In this program we are going to find the N'th finonacci number 
#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
    cout<<"Enter Number :";
    int n;
    cin>>n;
    // MEthod : 1

    // Cache Method:
    int dp[n+2];                 // for storing the one extra number i.e. n=0;
    dp[0]=0;                     //first number of fibo
    dp[1]=1;                     //Second number of fibo;
    for(int i=2;i<=n;i++)
    {
        dp[i]=dp[i-1]+dp[i-2];
    }
    cout<<"N'th Fibonacci Number is: "<<dp[n]<<endl;        // Starting from 0 index
    // Time Complexity : O(n)
    // Space Complexity: O(n)





    // Method :2

    //Direct Formula Base
    int num=round((pow((1+sqrt(5))/2,n))/sqrt(5));
    cout<<"N'th Fibonacci Number is: "<<num<<endl;
    // Time Complexity: O(logn)
    // Space Complexity: O(1)





    // Method 3: 
    int a=0;                  // 0th number
    int b=1;                  // 1st Number
    int c;                    // For storing the result
    for(int i=2;i<=n;i++)
    {
        c=a+b;
        a=b;
        b=c;
    }
    cout<<"N'th Fibonacci Number is: "<<b<<endl;
    // Time Complexity: O(n)
    // Space Complexity: O(1)
}
