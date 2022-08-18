#include <iostream>
using namespace std;

int main() {
    int n;
    int factors = 0;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        if (n % i == 0)
            factors++;
    }

    cout << factors;
    return 0;
}