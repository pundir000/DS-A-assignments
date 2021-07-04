/* arr=[-2,0,3,-5,2,-1]
where left<=right find the sum of each pair considering left and right as array indices
eg: [0,2]   [2,5]       [0,5]
    -2+3   3-5+2-1       -2+0+3-5+2-1
      1      -1             -3
      result=[1,-1,-3]
      */
#include <bits/stdc++.h> 
#include<vector>
using namespace std;
    int main()
    {
        int n,left,right;
        cin>>n;
        int arr[n],sum[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        cin>>left>>right;
        sum[0]=arr[0];
        for(int i=1;i<n;i++)
        {
               sum[i]=sum[i-1]+arr[i];
        }
        
      
        if(left==0)
        {
            cout<<sum[right];
        }
        else 
        {
            cout<<sum[right]-sum[left-1];
        }
        return 0;
        
    }