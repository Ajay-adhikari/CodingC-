#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int p,q;
	    p=n/4;
	  //  q=n%4;
	    if(p==0){
	        cout<<n<<endl;
	    }
	    else if(p!=0){
	        cout<<n-p<<endl;
	    }/*else {
	        cout<<n+p<<endl;
	    }*/
	}
	return 0;
}