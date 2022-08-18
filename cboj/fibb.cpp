#include <iostream>
using namespace std;

int main() {
    int n;
    int old1 = 0;
    int old2 = 1;
    int x = 0;
    cin >> n;

    if (n == 1) {
        cout << 0;
        return 0;
    } else if (n == 2) {
        cout << 1;
        return 0;
    }

    for (int i = 1; i < n; i++) {
       x = old1 + old2;
       old1 = old2;
       old2 = x;
    }

    cout << x;

    return 0;
}