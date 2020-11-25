// { Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


 // } Driver Code Ends


   

// function to find the trapped water in between buildings
// arr: input array
// n: size of array
int trappingWater(int arr[], int n)
{
 int lmax[n], rmax[n];
    
    lmax[0] = arr[0];
    rmax[n - 1] = arr[n - 1];
    
    for (int i = 1; i < n; i++) 
    {
        
        lmax[i] = max(arr[i], lmax[i - 1]);
        rmax[n - 1 - i] = max(arr[n - 1 - i], rmax[n - i]);
    }

    int res = 0;
    for (int i = 0; i < n; i++) 
    {
        res = res + min(lmax[i], rmax[i]) - arr[i];
    }
    return res;
}



// { Driver Code Starts.

int main(){
    
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        
        int a[n];
        
        //adding elements to the array
        for(int i =0;i<n;i++){
            cin >> a[i];            
        }
        
        //calling trappingWater() function
        cout << trappingWater(a, n) << endl;
        
    }
    
    return 0;
}
