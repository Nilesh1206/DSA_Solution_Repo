// In this problem we are going to find the permutation of a number

#include<bits/stdc++.h>
using namespace std;
const int size=4;
vector<int>permutation;
bool visited[size+1];

void solve()
{
    if(permutation.size()==size)
    {
        for(auto ele:permutation)
        {
            cout<<ele<<" ";
        }
        cout<<endl;
    }
    else 
    {
        for (int i = 1; i <= size; i++) 
        {
            if (visited[i]) continue;
            visited[i] = true;
            permutation.push_back(i);
            solve();
            visited[i] = false;
            permutation.pop_back();
        }
    }
}

int32_t main()
{
    cout<<"Enter size of the array: ";
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        v.push_back(a);
    }

    // Method :1 

    // By using STL in c++
    sort(v.begin(),v.end());   // For generating all permutations of array i.e. from small element
    cout<<"Permutation of array are: "<<endl;
    do
    {
        for(auto ele:v)
        {
            cout<<ele<<" ";
        }
        cout<<endl;
    }while(next_permutation(v.begin(),v.end())); // next_permutaion is a inbuild library , which generate the next_permutation






    cout<<endl;
    cout<<"Method 2: "<<endl;
    //Method: 2

    vector<int>permutation;
    bool visited[n+1];
    //vector<int>v;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        permutation.push_back(a);
    }
    cout<<"Permutations are : "<<endl;
    sort(permutation.begin(),permutation.end());
    solve();


}