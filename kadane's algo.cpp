// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


// Function to find subarray with maximum sum
// arr: input array
// n: size of array
int maxSubarraySum(int arr[], int n){
    int maxending =0;
    int maxfar=0;
    for(int i=0;i<n;i++)
    {
        maxending =maxending + arr[i];
        if(maxfar<maxending)
            maxfar=maxending;
        if(maxending<0)
            maxending=0;
        
    }
    return maxfar;
    // Your code here
    
}

// { Driver Code Starts.

int main()
{
    int t,n;
    
    cin>>t; //input testcases
    while(t--) //while testcases exist
    {
        
        cin>>n; //input size of array
        
        int a[n];
        
        for(int i=0;i<n;i++)
            cin>>a[i]; //inputting elements of array
        
        cout << maxSubarraySum(a, n) << endl;
    }
}
  // } Driver Code Ends
