
#include <bits/stdc++.h>
using namespace std;

// Position this line where user code will be pasted.
long long minCost(long long arr[], long long n);
int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        long long i, a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        cout << minCost(a, n) << endl;
    }
    return 0;
}


 typedef long long ll;
long long minCost(long long arr[], long long n) {


    priority_queue<ll, vector<ll>, greater<ll>> pq;
    for(ll i=0;i<n;i++)
        pq.push(arr[i]);
    ll cost = 0;    
    while(pq.size() != 1){
        ll x = pq.top();
        pq.pop();
         ll y  = pq.top();
        pq.pop();
        ll val=x+y;
        pq.push(val);
        cost=cost+val;
    }
    
    return cost;
}
