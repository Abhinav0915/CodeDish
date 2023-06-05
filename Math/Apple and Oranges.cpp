#include <iostream>
#include <boost/multiprecision/cpp_int.hpp>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int n,m;
	    cin >> n >> m;
	    cout << gcd(n,m)<< endl;
	}
	return 0;
}
