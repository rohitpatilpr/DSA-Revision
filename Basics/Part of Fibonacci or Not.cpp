#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
	cin>>N;
	
	cout<<endl;
	
	int a=0;
	int b=1;
	
	while(a<=N)
	{
	    if(a==N){
	        cout<<N<<" is part of fibonacci";
	        exit(1);
	    }
	    int c = a + b;
	    
	    a=b;
	    b=c;
	}

    cout<<N<<" is not a part of fibonacci";
    
	
}
