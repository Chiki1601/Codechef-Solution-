#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;cin>>t;
	while(t--){
	    int a,b,c,d;cin>>a>>b>>c>>d;
	    int p=a*100/c;
	    int q=b*100/d;
	    if(p>q){
	        cout<<"Chefina"<<endl;
	        
	    }
	    else if(p<q){
	        cout<<"Chef"<<endl;
	    }
	    else{
	        cout<<"Both"<<endl;
	    }
	}
	return 0;
}
