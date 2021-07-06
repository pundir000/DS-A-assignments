/*
mat    =   1 1 0 0 0      1--->doctors
           1 1 1 1 0      0--->patients
           1 0 0 0 0      key=2
           1 1 1 1 1      mxn matrix all 1's are followed by 0's
     rows represents hospitals .the hospitals who are having least no.of doctors is weekest hospital
     res=2,0  --->hospital 2 is weekest hospital
                  hospital 0 is 2nd weekest hospital

*/
#include<bits/stdc++.h>
using namespace std;
void weekest_hospital(vector<vector<int>> &mat,int k)
{
     for(int j=0;j<mat[0].size();j++)
        {
            for(int i=0;i<mat.size();i++)
            {    
                if(mat[i][j]==0)
              {          if(mat[i][j-1]==1) 
                    {     
                              cout<<i<<" ";
                                 k--;
                    }           
              }
                     if(k==0)
                      break;
            }
        }
     
       
}

int main()
{
 
    int n,m,val,k;
    cin>>n>>m>>k;
    vector<vector<int>> mat(n);
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>val;
                mat[i].push_back(val);
            }
        }
 weekest_hospital(mat,k);

 return 0;
     
}