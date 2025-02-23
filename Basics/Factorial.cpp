#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	int fact=1;
	
	cout<<"Enter a Number: "<<endl;
	cin>>n;
	
	for(int i=1 ; i<=n; i++){
	    fact=fact*i;
	}
	
	cout<<fact;
	
}
