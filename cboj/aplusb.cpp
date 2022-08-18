#include <iostream>
using namespace std;

int main () {

    int probs = 0;
    cin >> probs;

    int add[probs*2 - 1];
    
    for (int i = 0; i < probs*2; i++) {
        cin >> add[i];

        if (i % 2 == 1)
            cout << add[i] + add[i-1] << '\n';
        
    }

    /*for (int j = 0; j < probs*2; j++) {
        cout << add[j] + add[j + 1] << '\n';
    }*/

    return 0;
}