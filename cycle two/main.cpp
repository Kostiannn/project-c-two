#include <iostream>
#include <math.h>
using namespace std;

int main() {
    float kilometer;
    int days, counter = 2;

    cout << "Enter kms: ";
    cin >> kilometer;
    cout << "Enter days: ";
    cin >> days;

    for (int i = 0; i < days; ++i) {
        kilometer = kilometer / counter;
        ++counter;
    }

    cout << kilometer;

    return 0;
}
