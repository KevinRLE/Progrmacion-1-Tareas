#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double x;

    // a) fabs(7.5)
    x = fabs(7.5);
    cout << "a) x = " << x << endl;

    // b) floor(7.5)
    x = floor(7.5);
    cout << "b) x = " << x << endl;

    // c) fabs(0.0)
    x = fabs(0.0);
    cout << "c) x = " << x << endl;

    // d) ceil(0.0)
    x = ceil(0.0);
    cout << "d) x = " << x << endl;

    // e) fabs(-6.4)
    x = fabs(-6.4);
    cout << "e) x = " << x << endl;

    // f) ceil(-6.4)
    x = ceil(-6.4);
    cout << "f) x = " << x << endl;

    // g) ceil(-fabs(-8 + floor(-5.5)))
    x = ceil(-fabs(-8 + floor(-5.5)));
    cout << "g) x = " << x << endl;

    return 0;
}

