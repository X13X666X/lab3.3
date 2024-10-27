#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x;
    double y;

    cout << "x: "; cin >> x;

    if (x <= -4) {
        y = -2;
    }
    else {
        if (x > -4 && x < 0) {
            y = x / 4;  //  y = x / 4,інтервал (-4, 0)
        }
        else {
            if (x >= 0 && x < 2) {
                y = x * x;  // y = x^2 інтервал [0, 2)
            }
            else {
                if (x >= 2) {
                    y = 5 - x / 2;  // y = 5 - x / 2 інтервал [2, ∞)
                }
            }
        }
    }

    cout << "y = " << y << endl;
    return 0;
}
