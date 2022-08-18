#include <iostream>
#include <algorithm>
using namespace std;

int main () {
    string input = " ";
    
    getline(cin, input);

    replace(input.begin(), input.end(), ' ', '\n');

    cout << input + '\n';

    return 0;
}


