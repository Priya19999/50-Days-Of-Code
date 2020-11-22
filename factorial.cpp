#include<iostream>
using namespace std;
int fact(int n)
{
	if(n==1)//base case
	{
		return 1;
	}
	int temp= fact(n-1);
	return n*temp;
}

int main()
{
	cout<<fact(5);
}
