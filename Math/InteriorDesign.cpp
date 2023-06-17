#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int x1,y1,x2,y2;
	    cin >> x1 >> y1 >> x2 >> y2;
	    int cost1 = x1 + y1;
	    int cost2 = x2 + y2;
	    if(cost1>cost2){
	        cout << cost2 << endl;
	    }
	    else{
	        cout << cost1 << endl;
	    }
	}
	return 0;
}
