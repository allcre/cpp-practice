#include <iostream>
using namespace std;

int main() {

    int temp, snow, rain;

    cin >> temp >> snow >> rain;

    if ((temp < -40 && (snow >= 15 || rain >50)) || (snow >= 15 && rain > 50))
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
