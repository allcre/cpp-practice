#include <iostream> // could've been done by thinking in pairs 
using namespace std;

int main () {
    long n;
    long sum = 0;
    cin >> n;

    for (long i = 1; i <= n; i++) {
        sum += i;
    }

    cout << sum;

    return 0;
}