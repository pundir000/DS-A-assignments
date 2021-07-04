/*
arr= 1 2 3    find the richest person .
     3 1 5
     7 2 1
     */
#include <iostream>  
using namespace std;


int main()
{    
        
		int n,m;
		cin>>n;
        cin>>m;
		int  arr[n][m];
        
        cout<<"enter the elements in arary:";
	for (int i = 0; i<n; i++)
{
    for(int j=0;j<m;j++)
    {
        	cin>>arr[i][j];
    }
}
int max=0;
int cust=0,sum;
int i;
for(int i=0;i<n;i++)
{ sum=0;
for(int j=0;j<m;j++)
{
    sum=sum+arr[i][j];
    
}
if(sum>max)

{
    max=sum;
    cust=i+1;

}
}

cout<<cust;
return 0;
}