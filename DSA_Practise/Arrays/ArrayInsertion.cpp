#include <iostream>
using namespace std;
int main(){
    int arr[5] = {0,0,0,0};

    cout << "Previous Array: "; 

     for(int i=0;i<5;i++){
        cout<<arr[i]<<" " << endl;
    };
    arr[0] = 1;
    arr[2] = 2;
    arr[4] = 5;

     cout << " New Array: " << endl;

    for(int i=0;i<5;i++){
        cout<< arr[i]<< endl;
    };
    return 0;
}