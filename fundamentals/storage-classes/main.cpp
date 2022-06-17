#include <iostream>
#include "file.cpp";

int count;
extern void write_extern();

main() {
    count = 5;
    write_extern();
    system("PAUSE");
}