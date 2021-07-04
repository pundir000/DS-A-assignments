/*
extra_toffees=[2,3,5,1,3] extra_toffees=3
who all kids may have highest number of toffees if extra toffees are given to them.
res=true,true,true,false,true
*/
#include <bits/stdc++.h> 
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    { 
        cin>>arr[i];


    }
    int extra_toffees;
    cout<<"enter extra toffees:";
    cin>>extra_toffees;
    int m=*max_element(arr,arr+n);
    
   for(int i=0;i<n;i++)
    {
        if(arr[i]+extra_toffees>=m)
        {
           cout<<"true"<<" ";
        }
        else  
        cout<<"false"<<" ";
    }
    return 0;
}