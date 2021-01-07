
#include <bits/stdc++.h>
using namespace std;



bool find3Numbers(int arr[], int N, int X)
{
    //2 pointer approach
    sort(arr,arr+N);
 	for(int i=N-1;i>=1;i--)
 	{
 		int l=0,r=i-1;
 		while(l<r)
 		{
 			if((arr[i]+arr[l]+arr[r])==X)
 				return 1;
 			if((arr[i]+arr[l]+arr[r])<X)
 				l++;
 			else
 				r--;
 		}
 	}   
 	return 0;
    
}


// two pointer algo
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int N,sum;
		cin>>N>>sum;
		int i,A[N];
		for(i=0;i<N;i++)
			cin>>A[i];
        cout <<  find3Numbers(A, N, sum) << endl;
    }
}

