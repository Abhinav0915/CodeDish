#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int a,b;
	    cin >> a >> b;
	    int sum = a + b;
	    int n = 10;
	    int arr[10] = {6,2,5,5,4,5,6,3,7,6};
	    int d=0,count=0;
	    while(sum > 0){
	        d = sum%10;
	        count = count + arr[d];
	        sum = sum / 10;
	    }
	    cout << count << endl;
	}
	return 0;
}
