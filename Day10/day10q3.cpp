/* anagram*/
#include<bits/stdc++.h>
#include<iostream>
bool Anagram(string s1,string s2)

{
    if(s1.length()!=s2.length())
    return false;
    
}

int main()
{
    string s1,s2;
    getline(cin,s1);
    getline(cin,s2);

    bool a=Anagram(s1,s2);
    return 0;
}