/*arr=1 2 3                         arr=9 1 2 
      4 5 6                             3 4 5 
      7 8 9    after 1 rotation ==>     6 7 8    find  array after k rotation.
      */
#include <bits/stdc++.h>
#include<vector>
using namespace std;


   void shift(vector<vector<int>>& arr){
      int n = arr.size();
      int m = arr[0].size();
      int x = arr[n-1][m-1];
      for(int i = n-1; i>=0; i--){
         for(int j = m-1;j>=0;j--){
            if(j == 0 && i>0){
               arr[i][j] = arr[i-1][m-1];
            }
            else if(j>0){
               arr[i][j] = arr[i][j-1];
            }
         }
      }
      arr[0][0] = x;
   }
   vector<vector<int>> rotation(vector<vector<int>>& arr, int k) {
      while(k--){
         shift(arr);
      }
      return arr;
   }

int main(){
   int k;
   cin>>k;
   vector<vector<int>> arr = {{1,2,3},{4,5,6},{7,8,9}};
   vector<vector<int>> r=rotation(arr, k);
   for(int i = 0; i<r.size(); i++){
     
      for(int j = 0; j <r[i].size(); j++){
         cout << r[i][j] <<" ";
      }
   }
      
return 0;
}