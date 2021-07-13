/* common word */
#include<bits/stdc++.h>
using namespace std;
string common_word(string str1,vector<string> &str2)
{
    unordered_map<string,int> res;
    unordered_set<string> set(str2.begin(),str2.end());
    string temp="";
    for(int i=0;i<str1.size();i++)
    {
        str1[i]=isalpha(str1[i])?tolower(str1[i]):' ';

    }
    string word;
    stringstream s(str1);
    while(s>>word)
    {
        if(!set.count(word))
    {      res[word]++;
    }
    }   
        int freq=INT_MIN;
       for(auto i:res)
       {
           if(i.second>freq)
           {
               freq=i.second;
               temp=i.first;
           }
       }
return temp;
}
int main()
{
    string str1;
    
    getline(cin,str1);
    int n;
    cin>>n;
    vector<string> str2(n);
    for(int i=0;i<n;i++)
    {   cin>>str2[i];
    }
  string t=common_word(str1,str2);
   cout<<t;
return 0;


}