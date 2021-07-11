/* Roman to Integer*/
#include<bits/stdc++.h>
using namespace std;
int roman_to_int(char s)
{
    
    switch(s)
    {
        case 'I': return 1;
        case 'V': return 5;
        case 'X': return 10;
        case 'L': return 50;
        case 'C': return 100;
        case 'D': return 500;
        case 'M': return 1000;
        default : return 0;
    }
}
int conversion(string str,int n)
{   int sum=0;
    for(int i=0;i<n;i++)
    { if(roman_to_int(str[i])<roman_to_int(str[i+1]))
    {
        sum=sum+(roman_to_int(str[i+1]))-(roman_to_int(str[i]));
        i++;
    }
    else
    {
        sum=sum+roman_to_int(str[i]);
    }
    }
return sum;
}
int main()
{ 
    string str;
    cin>>str;
    int n=str.size();
    int s=conversion(str,n);
    cout<<s;
    return 0;
    
} 
