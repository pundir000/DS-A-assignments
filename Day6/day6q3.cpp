/*mat= 1 2 3 4    special matrix if all possible diagonals fromtop left to bottom right are having same element
       5 1 2 3
       9 5 1 2
       res=special matrix

*/
#include<bits/stdc++.h>

using namespace std;
bool special_matrix(vector<vector<int>>& mat)
{  
    int n=mat.size(),m=mat[0].size();

     for(int i=1;i<n;i++)
    {
        for(int j=1;j<m;j++)
        {   if(mat[i][j]!=mat[i-1][j-1])
              return false;
        }
        
        }
    
    return true;
      
}

int main()
{   
   int n,m,value;
   cin>>n>>m;
    vector<vector<int>> mat(n);
    for(int i=0;i<n;i++)
    {
      
      for(int j=0;j<m;j++)
      {
        cin>>value;
        mat[i].push_back(value);
      }
    }
   bool t=special_matrix(mat);
   if(t)
   {
       cout<<"special matrix";

   }
   else{
       cout<<"not a special matrix";
   }
   return 0;

}
