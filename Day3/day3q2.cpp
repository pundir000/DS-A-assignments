/*
1st array=integer array=[2,1,0]
2nd array=charater array=[a,b,c]
shuffle the string using integer array as the indices
so that the result =[c,b,a]


*/
#include <iostream> 
#include <vector> 
using namespace std;


int main()
{    
        
		int n;
		cin>>n;
		int  integer[n];
        char character[n];
        cout<<"enter the elements in integer arary:";
	for (int i = 0; i<n; i++)
{
        	cin>>integer[i];
}
 cout<<"enter the elements in character arary:";
	for (int i = 0; i<n; i++)
{
        	cin>>character[i];
}
char temp[n];
for(int i=0;i<n;i++)
{
    temp[integer[i]]=character[i];
}
	for (int i = 0; i<n; i++)
{
        	cout<<temp[i];
}
return 0;
}

