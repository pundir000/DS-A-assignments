/*


*/
#include<bits/stdc++.h>

using namespace std;
bool solve(vector<vector<int>> &mat1,vector<vector<int>> &mat2,int n)
{
    int k=4;
    while(k--)
    {
        reverse(mat1.begin(),mat1.end());
        for(int i=0;i<mat1.size();i++)
    {
        for(int j=0;j<mat1.size();j++)
        {
            swap(mat1[i][j],mat1[j][i]);
        
            }
    }
     if(mat1==mat2)
       return true;
 }
    return false;
}

int main()
{
    int n,v1,v2;
    cin>>n;
     vector<vector<int>> mat1(n);
     vector<vector<int>> mat2(n);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>v1;
            mat1[i].push_back(v1);

        }
    }
  
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>v2;
            mat2[i].push_back(v2);

        }
    }
  bool b=solve(mat1,mat2,n);
     if(b)
     cout<<"True";
     else
     cout<<"False";
  

    return 0;
}