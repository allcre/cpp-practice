#include <iostream>
using namespace std;

#define val1 20
#define val2 6
#define newLine '\n'

int main() {
    const int SIDE = 50; // int const or const int both work
    int area;
    area = SIDE * SIDE;
    cout << "The area of the square with side: " << SIDE << " is: " << area << newLine;

    int total;
    total = val1 * val2;
    cout << total;
    cout << newLine;

    return 0;
}