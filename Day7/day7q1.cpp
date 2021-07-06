/*
mat= 3  7   8
     9  11  13
     15 16  17 mat is mxn matrix contain all distinct values.Find the special number 
     
    special number ==> element minimum in its row and maximum in its column.
     res= 15    


*/
#include<bits/stdc++.h>
using namespace std;
int special_number(vector<vector<int>> &mat)
{
    int min,max,k=0;
    for(int i=0;i<mat.size();i++)
        {
            min=INT_MAX,max=INT_MIN;
            for(int j=0;j<mat[0].size();j++)
            {
                if(mat[i][j]<min)
                {
                    min=mat[i][j];
                    k=j;
                }
            }
                for(int j=0;j<mat.size();j++)
                {
                       if(mat[j][k]>max)
                       max=mat[j][k];
                }
                if(max==min)
                {
                    return min;
                    break;
                }
            }
return 0;
              
}
int main()
{
    int n,m,val;
    cin>>n>>m;
    vector<vector<int>> mat(n);
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>val;
                mat[i].push_back(val);
            }
        }
 int s=special_number(mat);
 cout<<s;
 return 0;
     
}
