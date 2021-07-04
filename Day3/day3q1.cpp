/*
array num=[8,1,2,2,3]
find the no of element smaller than num[i]
result=[4,0,1,1,3]

*/

#include <iostream> 
#include <vector> 
using namespace std;

int main()
{    
        
		int n;
		cin>>n;
		int  num[n];
        cout<<"enter the elements in array:";
	for (int i = 0; i<n; i++)
{
        	cin>>num[i];
}
for(int i=0;i<n;i++)
{ int count=0;
    for(int j=0;j<n;j++)
    {
        if(num[i]>num[j]&&i!=j)
        {
            count++;
        }
   
      
    }
    cout<<count<<" ";
}
   
return 0;
}
