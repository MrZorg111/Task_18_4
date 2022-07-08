#include <iostream>

int l_number (long long a, int count) {
    int tempo;
    if (a < 1) {
        return count;
    }
    tempo = a % 10;
    a /= 10;
    if (tempo % 2 == 0 || tempo == 0) {
        count++;
    }
    return l_number(a, count);
}
int main() {
    long long n;
    int ans = 0;
    std::cout << "Enter a large number:\n";
    std::cin >> n;

    std::cout << l_number(n, ans);
}
