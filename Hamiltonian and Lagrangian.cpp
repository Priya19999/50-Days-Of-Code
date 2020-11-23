#include<bits/stdc++.h>
using namespace std;
int main() 
{
	long long num,i,j,k;
	cin>>num;
    vector<long long> v(num);
	for(i=0;i<num;i++)
	{
		cin>>v[i];
	}
	for(j=0;j<num;j++)
	{
         for(k=j+1;k<num;k++)
		{
			if(v[j]<v[k]) // checking all elements in the right side
			{
				break;
			}
			else
			{
            if(k==num-1)
			{
				cout<<v[j]<<" ";//printing the number greater than all right elements
			}
			}
	    }
		
			
	}


cout<<v[num-1];// always printing the last element as there is nothing right to it
}
								
