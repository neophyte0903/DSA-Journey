#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int a[4],count=0;
	int n=sizeof(a)/sizeof(int);
	for (int i;i<n;i++){
	    cin>>a[i];
	}
	for (int j; j<n;j++){
	    if (a[j]>=10){
	        count=count+1;
	    }
	}
	cout<<count<<endl;
	return 0;
}
