/*
array=[1,3]
sum of xor of all subsets of array
subsets=[],[1],[3],[1,3]
xor    =0   1   3    2 =0+1+3+2=6
*/
#include <iostream> 
#include <vector> 
#include<math.h>
using namespace std;
int subset(vector<int> &arr,int c, int sum)
{  
    

    if(c==arr.size())
    return sum;

    return subset(arr,c+1,sum^arr[c])+subset(arr,c+1,sum);
  
    }
int main()
{ 
   vector <int> arr;
   int n;
   cin>>n;
  cout<<"enter the elements in arary:";
	for (int i = 0; i<n; i++)
{          int input;
          cin>>input;
        	arr.push_back(input);
}
cout<<subset(arr,0,0);
return 0;
}

