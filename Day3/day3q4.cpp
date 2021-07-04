/* 
arr=[1,2,3] first=1 
res=[1,0,2,1]====>xor(1,0)=1
                  xor(0,2)=2
                  xor(2,1)=3
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
int first;
cout<<"first:";
cin>>first;
vector <int> decode;
decode.push_back(first);
for(int i=0;i<n;i++)
{   
    first=first^arr[i];
    decode.push_back(first);
    
}
for(int i=0;i<n+1;i++)
{
    cout<<decode[i]<<" ";
}
return 0;
}