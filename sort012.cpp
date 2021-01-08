
#include<bits/stdc++.h>
using namespace std;
void sort012(int[],int);

int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}




void sort012(int a[], int n)
{
    // coode here 
    
    int l=0;//low
    int m=0;//medium
    int h=n-1; //high
    while(m<=h)
    {
        int x= a[m];
        if(x==0)
        {
            swap(a[l],a[m]);
            l++;
            m++;
        }
        else if(x==1)
        {
            m++;
        }
        else
        {
            swap(a[h],a[m]);
                h--;
        }
    }
}
