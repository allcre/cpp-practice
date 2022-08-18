#include <iostream>
using namespace std;

int main () {

    bool boo;
    string pal;
    cin >> pal;

    for (float i = 0; i < (pal.length() + 1 / 2); i++) {
        
        if (pal[i] != pal[pal.length() - (i + 1)]) {
            boo = false;
            break;
        }
        boo = true;
    }

    if (boo) 
        cout << "YES";
    else
        cout << "NO";

    return 0;
}

