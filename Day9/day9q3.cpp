/*addition of 2 large integers*/
#include<bits/stdc++.h>
using namespace std;
string add_integers(string s1,string s2)
{
    string str="";
    int carry=0;
    int n1=s1.size();
    int n2=s2.size();
    if(n1>n2)
    swap(s1,s2);
    int d=n2-n1;
    for(int i=n1-1;i>=0;i--)
    {
        int sum=((s1[i]-'0')+(s2[i+d]-'0')+carry);
        str.push_back(sum%10+'0');
        carry=sum/10;

    }
    for(int i=n2-n1-1;i>=0;i--)
    {
        int sum=((s2[i]-'0')+carry);
        str.push_back((sum%10)+'0');
        carry=sum/10;
        
    }
    if(carry)
    {
        str.push_back(carry+'0');

    }
    reverse(str.begin(),str.end());
    return str;
    
}
int main()
{
    string str1,str2;
    cin>>str1>>str2;
    string s=add_integers(str1,str2);
    cout<<s;
    return 0;


}