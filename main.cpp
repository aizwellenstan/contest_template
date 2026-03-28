#include <bits/stdc++.h>
using namespace std;

string f(stringstream& s) {
    return "";
}

int main() {
    stringstream s; s << cin.rdbuf();
    for (string o, r; !(r = f(s)).empty(); o += r) if (s.eof()) cout << o;
}
