#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void f() {
    ll n; 
    // This line handles the actual problem input
    if (!(cin >> n)) exit(0); 

    // --- YOUR LOGIC HERE ---
    // -----------------------

    cout << ans << "\n";
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    
    int t = 1; 
    if (cin >> t) {
        while(t--) f(); 
        while(cin >> t) f(); // Safety for trailing EOF data
    }
}
