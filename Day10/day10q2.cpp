/* excel*/
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
string cno_to_cname(int n)
{
     string cname="";
     while(n>0)
     {
         char c='A'+(n-1)%26;
         cname=c+cname;
         n=(n-1)/26;

     }
     return cname;

}

int main()
{
    int n;
    cin>>n;
    string str=cno_to_cname(n);
    cout<<str;
    return 0;
    
}