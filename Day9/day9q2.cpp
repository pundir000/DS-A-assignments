/**/
#include<bits/stdc++.h>
using namespace std;
bool isValid(string s) {
        stack <char> st;
        char top;
        for(int i=0;i<s.length();i++)
        {
              if(s[i]=='{'||s[i]=='('||s[i]=='[')
              {
                  st.push(s[i]);
              }
            else{
                  if(st.empty())
                       return false;
                  else{
                        top=st.top();
                    if(s[i]==')'&& top=='('||s[i]=='}'&& top=='{'||s[i]==']'&& top=='[')
                           st.pop();
                    else{
                        return false;
                    }
                        
                }
                }
        }
            if(st.empty())
            return true;
  return false;
            
    }
        
    
    int main(){
     string s;
     cin>>s;
    
      if(isValid(s))
      cout<<"True";
      else
      cout<<"False";
    return 0;
    
    }