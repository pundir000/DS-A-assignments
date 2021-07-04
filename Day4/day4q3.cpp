/*array     =[1,1,4,2,1,3]
sorted array=[1,1,1,2,3,4]
how many element are not in place of after sorting
in this case 3
*/

#include <bits/stdc++.h> 
using namespace std;


int main()
{    
        
		int n,count=0;
		cin>>n;
		int  arr1[n],arr2[n];
       cout<<"enter the elements in arary:";
	for (int i = 0; i<n; i++)
{
        	cin>>arr1[i];
}
	for (int i = 0; i<n; i++)
{
        	arr2[i]=arr1[i];
}
sort(arr2,arr2+n);

for(int i=0;i<n;i++)
{
    if(arr1[i]!=arr2[i])
    count++;
}
cout<<count;
return 0;
}

