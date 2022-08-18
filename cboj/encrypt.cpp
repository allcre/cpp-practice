#include <iostream>
using namespace std;

int add(int arr[]) {
    int sum = 0;
    for (int h = 0; h < 3; h++) {
        sum += arr[h];
    }

    return sum;
}

int main () {

    int n[6];
    int g1[3];
    int g2[3];
    int j = 1;
    bool boo = false;

    for (int i = 0; i < 6; i++) {
        cin >> n[i];
    }

    for (j = 1; j < 5; j++) {
        for (int k = j + 1; k < 6; k++) {

            int x = 0;
            g1[0] = n[0];
            g1[1] = n[j];
            g1[2] = n[k];

            for (int l = 1; l < 6; l++) {
                if (j!= l && k != l) {
                    g2[x] = n[l];
                    x++;
                }
            }

            if (add(g1) == add(g2)) {
                boo = true;
                goto next;
            }
        }
    }

    next:

    if (boo)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}





