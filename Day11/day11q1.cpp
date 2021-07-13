/*keyboard lines*/
#include<bits/stdc++.h>
using namespace std;
vector<string> keyboard_lines(vector<string> str)
{ 
  vector<string> r;
  vector<int> arr={2,3,3,2,3,2,2,2,1,2,2,2,3,3,1,1,1,1,2,1,1,3,3,1,3};
  for(int i=0;i<str.size();i++)
   {  int t=arr[tolower(str[i][0])-97];
      int flag=0;
       for(int j=1;j<str[i].size();j++)
       {
       if(t!=arr[tolower(str[i][j])-97])
       {
         flag=1;
         break;
       }
       }
       if(flag==0)
       r.push_back(str[i]);

   }
   return r;


}
int main()
{
  int n;
  cin>>n;
  vector<string> str(n);
    for(int i=0;i<str.size();i++)
    {
      cin>>str[i];
    }
   
  vector<string> s=keyboard_lines(str);
for(int i=0;i<s.size();i++)
    {
    cout<<s[i]<<" ";
    }
    
}