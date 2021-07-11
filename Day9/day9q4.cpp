/*Addition of two large binary nos*/
#include<bits/stdc++.h>
using namespace std;
string add_binary(string s1,string s2)
{
    string str="";
    int carry=0;
    int n1=s1.size()-1;
    int n2=s2.size()-1;
   
    
    while(n1>=0||n2>=0||carry){
        if(n1>=0)
        {carry+=s1[n1]-'0';
        --n1;}
         if(n2>=0)
       { carry+=s2[n2]-'0';
         --n2;
       }
       str.push_back((carry%2)+'0');
       if(carry>1)
       carry=1;
       else
       carry=0;
    }
if(carry)
str.push_back((carry%2)+'0');
    reverse(str.begin(),str.end());
    return str;
    
}
int main()
{
    string str1,str2;
    cin>>str1>>str2;
    string s=add_binary(str1,str2);
    cout<<s;
    return 0;


}