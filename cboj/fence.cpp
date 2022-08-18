#include <iostream> // fixed
using namespace std;

int main() {
    int base;
    cin >> base;
    long double area = 0;
    float h = 0;

    float sides[base + 1];

    for (int i = 0; i <= base; i++) {
        cin >> sides[i];
    }

    float sums[base];

    for (int j = 0; j < base; j++) {
        sums[j] = sides[j] + sides[j+1];
    }

    for (int k = 0; k < base; k++) {
        cin >> h;
        area += sums[k] * (h/2);
    }

    cout << fixed << area;
    
    return 0;
}