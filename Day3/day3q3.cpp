/*run length encoding 
integer array=[1,2,3,4]
pair (freq,value)
freq=arr[2*i]
value=arr[2*i+1]====>pair(1,2)=[2]
                     pair(3,4)=[4,4,4]
                     [2]+[4,4,4]=[2,4,4,4]
result=[2,4,4,4]
*/
#include <bits/stdc++.h> 
#include<vector>
using namespace std;
int main()
{    
        
		int n;
        cin>>n;
		
		vector <int> arr;
       
        cout<<"enter the elements in arary:";
	for (int i = 0; i<n; i++)
{             
           int input;
        	cin>>input;
            arr.push_back(input);

}
vector <int> temp;
int k=0;
for(int i=0;i<n;i+=2)
{
    while(arr[i]--)
    {
        temp.push_back(arr[i+1]);
    }
}

for(int i=0;i<temp.size();i++)
    {
        cout<<temp[i]<<" ";
    }
    return 0;
}
