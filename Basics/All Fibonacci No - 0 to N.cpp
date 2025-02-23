#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
	cin>>N;
	
	cout<<endl;
	
	int a=0;
	int b=1;
	
	while(a<N)
	{
	    cout<<a<<endl;
	    int c = a + b;
	    
	    a=b;
	    b=c;
	}

    
	
}
