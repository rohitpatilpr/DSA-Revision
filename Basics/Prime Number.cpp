#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
	
	cin>>n;
	cout<<endl;
	
	for(int i = 2; i<n-1; i++){
	    if(n % i == 0){
	        cout<<n<<" is Not Prime No";
	        exit(1);
	    }
	}
	
	cout<<n<<" Prime No";
}
