#include <iostream>
using namespace std;

int main() {
	// your code goes here
int t;
	cin>>t;
	int l,n;
	int arr[n];
	while(t--){
	    cin>>l>>n;
	    int count=0;
	    for(int i=l;i<=n;i++){
	        
            if(i%10==2|| i%10==3 || i%10==9){
	        count++;
                
            }
	    }
	   
	 cout<<count<<endl;    
	}
	
	return 0;
}