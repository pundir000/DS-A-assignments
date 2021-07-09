/*longest common prefix*/
#include<bits/stdc++.h>
using namespace std;
 string common_prefix(string lcpl,string lcpr)
{
    string temp="";
    int m=min(lcpl.length(),lcpr.length());
    for(int i=0;i<m;i++)
    {
            if(lcpl[i]==lcpr[i])
              temp+=lcpl[i];
            else break;
    }
    return temp;
}
string solution(vector<string> &s,int l,int r)
{
      if(l==r)
       return s[r];
    int mid=(l+r)/2;
    string lcpl=solution(s,l,mid);
    string lcpr=solution(s,mid+1,r);
    return common_prefix(lcpl,lcpr);

}
string lcp(vector<string> &s)
{
    int n=s.size();
    if(!n)
    return "";
    return(solution(s,0,n-1));
}
int main()
{
    int n;
    cin>>n;
    vector<string> s;
    for(int i=0;i<n;i++)
    {
        string str;
        cin>>str;
        s.push_back(str);
    }
    string str=lcp(s);
    cout<<str;
    return 0;

}