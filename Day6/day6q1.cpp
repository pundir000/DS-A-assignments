/*
transpose of matrix
eg:mat= 1 2  3  4      then mat_trans= 1 5 9
        5 6  7  8                      2 6 10
        9 10 11 12                     3 7 11
                                       4 8 12
*/
#include<iostream>
#include<vector>
using namespace std;

int main()
{   
    int n,m;
    cin>>n>>m;
    int mat[n][m];
    

    for(int i=0;i<n;i++)
    {     
        for(int j=0;j<m;j++)
        {  
          cin>>mat[i][j];

        }
      
    }
     int temp[n][m];
for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {     temp[j][i]=mat[i][j];
        }
    }

     for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {  cout<<temp[i][j]<<" ";
        }
    }

         
    return 0;
}