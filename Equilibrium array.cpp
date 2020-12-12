// { Driver Code Starts
#include <iostream>
using namespace std;


int equilibriumPoint(long long a[], int n);

int main() {

    long long t;
    
    //taking testcases
    cin >> t;

    while (t--) {
        long long n;
        
        //taking input n
        cin >> n;
        long long a[n];

        //adding elements to the array
        for (long long i = 0; i < n; i++) {
            cin >> a[i];
        }

        //calling equilibriumPoint() function
        cout << equilibriumPoint(a, n) << endl;
    }
    return 0;
}

int equilibriumPoint(long long a[], int n) {

    // Your code here
    if(n==1)
    return 1;
    long long psum[n]={0};
    psum[0]=a[0];
    for(int i=1;i<n;i++)
    {
        psum[i]=a[i]+psum[i-1];
    }
    for(int i=1;i<n;i++)
    {
        if(psum[i-1]==psum[n-1]-psum[i])
        {
            return i+1;
        }
    }
    return -1;
}
