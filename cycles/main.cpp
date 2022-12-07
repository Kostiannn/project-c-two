#include <iostream>
#include <math.h>

using namespace std;

int main() {
    float x, y, r;

    cout << "Enter x: ";
    cin >> x;
    cout << "Enter y: ";
    cin >> y;
    cout << "Enter the radius: ";
    cin >> r;

    if (sqrt(pow(x, 2) + pow(y, 2)) > 3) {
        cout << "OUT OF RANGE!" << endl;
        return 1;
    }
    else if (y < pow(x - 1, 2)) {
        cout << "OUT OF RANGE!" << endl;
        return 1;
    }
    else if (r <= 1) {
        cout << "TOO SMALL RADIUS!" << endl;
    }

    return 0;
}