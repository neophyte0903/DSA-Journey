#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >>t ;
	for (int i=0;i<t;i++){
	    int x,y,a;
	    cin>>x>>y>>a;
	    if (a>=x){
	        if(a<y){
	            cout << "YES" << endl;
	        }else{
	            cout<< "NO"<<endl;
	        }
	    }else{
	        cout<<"NO"<<endl;
	    }
	}
	
	return 0;
}
