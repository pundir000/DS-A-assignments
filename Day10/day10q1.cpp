/*palindrome string*/
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
bool palindrome(string s)
{
    int l=0,r=s.size()-1;
    while(l<r)
    {
        while(!isalnum(s[l]))
        l++;
        while(!isalnum(s[r]))
        r--;
        if(s[l++]!=s[r--])
       
        return false;
       

    }
    return true;

}
int main()
{
    string s;
    getline(cin,s);
    for(int i=0;i<s.size();i++)
    {
        s[i]=tolower(s[i]);

    }
    bool p=palindrome(s);
    if(p)
    cout<<"true";
    else
    cout<<"false";
    
    return 0;
}