#include <iostream>
using namespace std;

int main() {
    double x, y;

    cout << "Enter value for x: ";
    cin >> x;
    cout << "Enter value for y: ";
    cin >> y;

    double *ptrX = &x;
    double *ptrY = &y;

    double sum = *ptrX + *ptrY;

    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    cout << "Sum = " << sum << endl;

    return 0;
}
