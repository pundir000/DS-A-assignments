 #include <bits/stdc++.h> 
#include <vector> 
#include<unordered_map>


using namespace std;
      
vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        
        unordered_map<int,int> map;
        vector<int> res;
        
        for(int i=0;i<nums1.size();i++)
        {
            map[nums1[i]]++;
        }
        
        for(int i=0;i<nums2.size();i++)
        {
            if(map[nums2[i]] > 0)
            {
                res.push_back(nums2[i]);
                map[nums2[i]] = 0;
            }
        }
        
        return res;
    }
int main() 
{    int n,m;
    vector<int> nums1;
    vector<int> nums2;
	cin>>n>>m;
	for(int i=0;i<n;i++)
	{
		int ip1;
		cin>>ip1;
		nums1.push_back(ip1);

	}
	for(int i=0;i<m;i++)
	{
		int ip2;
		cin>>ip2;
		nums1.push_back(ip2);
		
	}
    vector<int> res=intersection(nums1,nums2);
    for(int x:res)
        cout<<"intersection:"<<x<<" ";
   return 0; 
}
