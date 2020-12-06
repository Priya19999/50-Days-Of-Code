#include<bits/stdc++.h>
using namespace std;


unordered_map<int, int> um;


int firstRepeated(int *, int);

int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        
        int arr[n];
        
        for(int i = 0 ; i < n ; ++ i ) 
            cin >> arr[i] ;
            
        cout << firstRepeated(arr,n) << "\n";
    }

    return 0;
}

int firstRepeated(int arr[], int n) 
{

    
    unordered_map<int,int> a;
    for(int i=0;i<n;i++)
    {
        a[arr[i]]++;
    }
        for(int i=0;i<n;i++)
        {
            if(a[arr[i]]>=2)
            return i+1;
        }
        return -1;
}
