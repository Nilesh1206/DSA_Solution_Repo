/*
You're given two positive integers representing the height of a staircase and
the maximum number of steps that you can advance up the staircase at a
time. Write a function that returns the number of ways in which you can
climb the staircase.
*/

#include<bits/stdc++.h>
using namespace std;

// A recursive function used by countWays
int countWays(int n, int m)
{
    int res[n + 1];             // Store the result of steps to reach the i'th stair
    int temp = 0;
    res[0] = 1;                 // when number of stairs is one

    // Sliding window approach
    //In this approach for the ith stair, we keep a window of sum of last m 
    //possible stairs from which we can climb to the ith stair.
    for (int i = 1; i <= n; i++)
    {
        int s = i - m - 1;
        int e = i - 1;
        if (s >= 0)
        {
            //We remove the elements of the previous window and add the element of 
            //the current window and update the sum.
            temp -= res[s];
        }
        temp += res[e];

        res[i] = temp;
    }
    return res[n];
}

int32_t main()
{
    int h,n;
    cout<<"Enter the Maximum height: ";
    cin>>h;
    cout<<"Enter the no of steps: ";
    cin>>n;
	cout << "Number of ways  to reach the n'th stairs are: "<<countWays(h, n);
	return 0;
}


/*
Time Complexity: O(n)
Auxiliary Space: O(n)
*/