/*
given a square matrix  reverse every row and then flipthe numbers 0->1
                                                                  1->0
    eg : mat= 1 1 0  reverse   0 1 1  flip      1 0 0
              1 0 1  ------->  1 0 1--------->  0 1 0
              0 0 0            0 0 0            1 1 1
*/
#include<bits/stdc++.h>

using namespace std;
int main()
{ 
  int n;
    cin>>n;
    vector<vector<int>> mat(n);
    for(int i=0;i<n;i++)
    {
      
      for(int j=0;j<n;j++)
      {
        int value;
        cin>>value;
        mat[i].push_back(value);
      }
    
    }
   for(int i=0;i<mat.size();i++)
    reverse(mat[i].begin(),mat[i].end());
      for(int i=0;i<n;i++)
    {     
        for(int j=0;j<n;j++)
        {  
          cout<<mat[i][j]<<" ";

        }
      
    }
      cout<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
        {  mat[i][j]=mat[i][j]^1;
    }
    }
      for(int i=0;i<n;i++)
    {     
        for(int j=0;j<n;j++)
        {  
          cout<<mat[i][j]<<" ";

        }
      
    }
    return 0;
}