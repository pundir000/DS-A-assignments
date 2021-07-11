#include<bits/stdc++.h>
using namespace std;
 bool isvowel(char c)
 {
 return (c=='A'||c=='a'||c=='E'||c=='e'||c=='I'||c=='i'||c=='O'||c=='o'||c=='U'||c=='u');
}
 string vowel(string s)
 {
      int l=0,r=s.size()-1;
    while(l<r)
    {
        if(!isvowel(s[l]))
        l++;
        if(!isvowel(s[r]))
        r--;
        if(isvowel(s[l])&&isvowel(s[r]))
        {swap(s[l],s[r]);
        l++;
        r--;
        }

    }
    return s;
 }

int main()
{
    string s;
    getline(cin,s);
     string a=vowel(s);
    cout<<a;
     return 0;

}