#include <bits/stdc++.h>

int main() {
    int t, i = 1;
    long long n, s, d;
    for (std::cin >> t; i <= t; ++i) {
        std::cin >> n;
        long long temp = n;
        while (temp != 1 && temp != 4) {
            for (s = 0; temp > 0; temp /= 10) s += (d = temp % 10) * d;
            temp = s;
        }
        std::cout << "Case #" << i << ": " << n << (temp == 1 ? " is a Happy number.\n" : " is an Unhappy number.\n");
    }
}
