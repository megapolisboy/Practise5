#include <iostream>
using namespace std;

/*
Variant 8
*/

double findF(double x, double a, double b, double c) {
    double f;
    if (x < 0 && b != 0) {
        f = a * x * x * x + b * x * x;
    }
    else if (x > 0 && b == 0) {
        f = (x - a) / (x - c);
    }
    else {
        f = (x + 5)/(c*(x - 10));
    }
    return f;
}

int main()
{
    double a, b, c, xstart, xfinish, dx;
    cin >> a >> b >> c >> xstart >> xfinish >> dx;
    for (double x = xstart; x < xfinish; x += dx) {
        int ac = a;
        int bc = b;
        int cc = c;
        double f = findF(x, a, b, c);
        if (!(ac|bc|cc) != 0) {
            cout << f << endl;
        }
        else {
            cout << (int)f << endl;
        }
    }
}