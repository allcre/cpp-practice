#include <iostream>
using namespace std;

int main() {
    int i1, i2, output; // declaring and initializing variables

    cout << "Please enter 2 integers: "; // taking user input
    cin >> i1 >> i2; // seperated by enter

    output = i1 + i2; // add

    cout << i1 << " + " << i2 << " = " << output; // print
    
    return 0;
}