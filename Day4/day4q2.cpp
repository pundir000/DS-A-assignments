/* arr=[1,4,3,2]
pair(Ai,Bi) where Ai and Bi belongs to array 
take all the pair such that sum of all minimum(Ai,Bi) is maximised.
ie,pairs(1,4),(1,3),(1,2),(4,3)(4,2)(3,2) maximum sum is 4
          1     1     1     3     2    2 
          */
#include <bits/stdc++.h> 
#include<vector>
using namespace std;


int main()
{    
        
		int sum=0;
		
		vector <int> arr;
      int n;
      cin>>n;
	for (int i = 0; i<n; i++)
{           int input;
            cin>>input;
        	arr.push_back(input);
            
}


sort(arr.begin(),arr.end());
for(int i=0;i<arr.size();i+=2)
{
    sum=sum+arr[i];

}
cout<<sum;
return 0;

}

