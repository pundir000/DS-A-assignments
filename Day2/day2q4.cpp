/*
array=[1,2,3,1,1,3] a pair (i,j) is called good pair if
nums[i]==nums[j]&i<j  ====>(0,3),(0,4),(3,4),(2,5) are good pairs
result=4
*/
#include <bits/stdc++.h> 
using namespace std;
int main()
{
    int n,count=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    { 
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
    {
        if(arr[i]==arr[j]&&i<j)
        {
            count++;

        }
    }
    }
    cout<<count;
    return 0;
}