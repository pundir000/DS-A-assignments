/*longest common suffix*/
#include<bits/stdc++.h>
using namespace std;
string common_suffix(string l,string r)
{      reverse(l.begin(),l.end());
       reverse(r.begin(),r.end());
       string temp="";
       int m=min(l.length(),r.length());
       for(int i=0;i<m;i++)
    {
          if(l[i]==r[i])
            temp+=l[i];
          else break;
    }
      reverse(temp.begin(),temp.end());
      return temp;
}
string solution(vector<string> &s,int l,int r)
{
     if(l==r)
       return s[r];
    int mid=(l+r)/2;
    string lcpl=solution(s,l,mid);
    string lcpr=solution(s,mid+1,r);
    return common_suffix(lcpl,lcpr);

}
string lcs(vector<string> &s)
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
     
    string str=lcs(s);
    cout<<str;
    return 0;
 }