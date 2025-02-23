#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
	int arr[100];
	int largest;
	
	cin>>n;
	cout<<endl;
	
	for(int i = 0; i<n; i++){
	    cin>>arr[i];
	}
	
	largest = -1;
	
	for(int i = 0; i<n; i++){
	    if(arr[i] > largest)
	    {
	        largest = arr[i];
	    }
	}
	
	cout<<largest;
}
