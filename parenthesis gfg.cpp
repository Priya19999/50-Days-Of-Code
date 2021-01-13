// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


// Function to return if the paranthesis are balanced or not
bool ispar(string x)
{
    // Your code here
   stack<char>s;
    for(auto i : x)
    {
        if(i == '(')
            s.push(')');
        else if(i == '{')
            s.push('}');
        else if(i == '[')
            s.push(']');
        else if( s.empty() || s.top() != i)
            return false;
        else if(s.top() == i)
            s.pop();
            
    }
    return s.empty();
}


// { Driver Code Starts.

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       if(ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}  // } Driver Code Ends
