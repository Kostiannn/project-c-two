#include <iostream>
#include <cmath>

using namespace std;

int main() {
double y, x, a, e;

cout << "Enter the values of y, x, a, e:";
cin >> y >> x >> a >> e;

double result = (pow(y,2) - x) / (pow(x,2) - y + 1) - (pow(a,2) - x + 2) / (pow(x,2) - pow(e,x) - 2);

cout << "The result is: " << result << endl;

return 0;
    }
