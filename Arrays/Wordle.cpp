#include <iostream>
#include <string>
using namespace std;
#define ln "\n"
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

auto solve(){
    string s, t;
    char res[6]; res[5] = '\0';
    cin >> s >> t;
    for (int i = 0; i<5; i++){
        if (s[i] == t[i]) res[i] = 'G';
        else res[i] = 'B';
    }
    cout << res << ln;
}

int main() {
    fastio;
    int t; cin>>t;
    while(t--){
        solve();
    }
	return 0;
}