#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        int count = 0;
        cin >> n;
        int *arr = new int[n];
        for(int i=0;i<n;i++){
            cin >> arr[i];
        }
        for(int i=0;i<n;i++){
            if(arr[i]>=1000){
                count++;
            }
        }
        cout << count << endl;
    }
	return 0;
}
