
#include<bits/stdc++.h>
using namespace std;

void convertToWave(int *arr, int n){
    int temp,i;
    for(i=0;i<n-1;i++)
    {
        temp=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;
        i++;
    }
    
    
}


int main()
{
    int t,n;
    cin>>t; 
    while(t--) 
    {
        cin>>n; //input size of array
        int a[n]; //declare array of size n
        for(int i=0;i<n;i++)
            cin>>a[i]; //input elements of array
        
        convertToWave(a, n);

        for(int i=0;i<n;i++)
            cout<<a[i]<<" "; //print array
            
        cout<<endl;
    }
}  
