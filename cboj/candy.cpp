#include <iostream>
#include <vector>
using namespace std;

int main () {
    int n, a;
    int eat = 0;
    cin >> n;
    vector<int> x;

    for (int i = 0; i < n; i++) {
        cin >> a;
        x.push_back(a);
    }

    for (int j = 0; j < x.size(); j++) {
        for (int k = j + 1; k < x.size(); k++) {
            if (x[j] == x[k]) {
                eat++;
                x.erase(x.begin() + k);
                k--;
            }
        }
    }

    cout << eat;

    return 0; 
}