
#include <iostream>
using namespace std;

int fib_num(int n) {
    if (n == 0) {
        return 0;
    }

    if (n == 1) {
        return 1;
    }

    return fib_num(n - 1) + fib_num(n - 2);
}

int main() {
    int n;
    cin >> n;

    cout << "The " << n
         << "th Fibonacci number is: "
         << fib_num(n) << endl;

    return 0;
}

