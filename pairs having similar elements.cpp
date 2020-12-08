#include<bits/stdc++.h>

using namespace std;

int main()

{

int n;

long count=0,x=0,y=0;

cin>>n;

int a[n];

for(int i=0;i<n;i++){
cin>>a[i];
}

sort(a,a+n);

for(int i=0;i<n;i++)

{

if(a[i]+1==a[i+1])

{

x++;//counting elements that satisfy our condition

}

else if(a[i]==a[i+1])

{

x++;

/*we also need to count the same elements

for ex:- 2 3 3 here 2 3 and 2 3 both satisfy our condition so we are counting equal ones also

*/

y++;

}

else

{

if(x!=y)// there may be chance 4 4 4 
{

count+=((x*(x+1))/2);//all possible transitives

}

x=0;

y=0;

}

}

cout<<count;

}
