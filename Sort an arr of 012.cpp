#include<bits/stdc++.h>
using namespace std;
int main()
{
int test;
cin>>test;
while(test--)
{
int size;
cin>>size;
vector<int> v(size);
for(int i=0;i<size;i++)
{ 
    cin>>v[i];
}
sort(v.begin(),v.end());
for(auto a:v)
{
cout<<a<<" "; 
    
} 
cout<<endl;
    
}
return 0;
    
}
