#include <iostream> // this works idk what cboj is on
using namespace std;
#include <cmath>

int main() {
    int n;
    int y = 0;

    cin >> n;

    for (int i = 2; i < n; i += 2) {
        int digits = int(log10(i) + 1);
        int arr[digits];
        int x = 0;

        for (int l = 0; l < digits; l++) {
            for (int k = 10; k <= i * 10; k *= 10) {
                arr[l] = i % k / (k / 10);
            }
        }

        for (int j = 0; j < digits; j++) {

            if (arr[j] % 2 == 0) {
                x++;
            }
            if (x == digits) {
                y++;
                cout << i << x << endl;
            }
        }
    }

    cout << y;
    return 0;
}