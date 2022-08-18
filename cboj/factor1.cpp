#include <iostream>  // could solve by i <= sqrt(n), check if perfect square, double factors
#include <cmath>
using namespace std;

int main() {
    int n;
    int factors = 0;
    cin >> n;

    int square = floor(double(sqrt(n)));

    for (int i = 1; i < square; i++) {
        if (n % i == 0)
            factors++;
    }

    factors *= 2;
    
    if (n / square == square)
        factors++;

    cout << factors;
    return 0;
}