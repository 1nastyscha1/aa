#include <iostream>
#include <vector>

int fibonacciSearch(const std::vector<int>& a, int x) {
    int n = a.size();
    int fib2 = 0, fib1 = 1, fib = fib1 + fib2;
    while (fib < n) {
        fib2 = fib1;
        fib1 = fib;
        fib = fib1 + fib2;
    }
    int offset = -1;
    while (fib > 1) {
        int i = std::min(offset + fib2, n - 1);
        if (a[i] < x) {
            fib = fib1;
            fib1 = fib2;
            fib2 = fib - fib1;
            offset = i;
        } else if (a[i] > x) {
            fib = fib2;
            fib1 = fib1 - fib2;
            fib2 = fib - fib1;
        } else return i;
    }
    if (fib1 && offset + 1 < n && a[offset + 1] == x) return offset + 1;
    return -1;
}

int main() {
    std::vector<int> v = {1, 3, 7, 9};
    std::cout << fibonacciSearch(v, 7);
}
