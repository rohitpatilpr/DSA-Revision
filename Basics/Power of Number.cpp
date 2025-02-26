#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int x,n;
	
	cout<<"Enter a number and its power";
	cin>>x>>n;
	
	int ans=1;
	
	for(int i=1; i<=n; i++)
	{
	    ans= ans*x;
	}
	
	cout<<"\n"<<ans;

}
