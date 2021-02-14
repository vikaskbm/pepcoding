// Power-logarithmic

// 1. You are given a number x.
// 2. You are given another number n.
// 3. You are required to calculate x raised to the power n. Don't change the signature of power function.

// x=2
// n=5

// 32


#include<iostream>

int powerLogarithmic(int x, int n) {
    if (n == 0)
        return 1;

    int xpnb2 = powerLogarithmic(x, n / 2);
    int xn = xpnb2 * xpnb2;

    if (n % 2 != 0)
        xn *= x;

    return xn;
}

int main() {
    int x, n;
    std::cin >> x >> n;
    std::cout << powerLogarithmic(x, n) << std::endl;
}
