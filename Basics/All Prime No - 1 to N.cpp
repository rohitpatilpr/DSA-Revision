#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
	
	cin>>N;
	cout<<endl;
	
	for(int j=1; j<=N; j++){
	    
	    for(int i = 2; i<j-1; i++){
	    if(j % i == 0){
	        cout<<j<<" is Not Prime No"<<endl;
	        break;
	    }
	}
	cout<<j<<" Prime No"<<endl;
	
	}
	
}
