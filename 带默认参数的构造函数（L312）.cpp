#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

class Complex {
public:
    Complex(double r = 0.0, double i = 0.0);
    double abscomplex();
private:
    double real;
    double imag;
};

Complex::Complex(double r, double i) {
    real = r;
    imag = i;
}

double Complex::abscomplex() {
    double t;
    t = real * real + imag * imag;
    return sqrt(t);
}

int main() {
    double x, y;
    cin >> x >> y;
    Complex S1;
    Complex S2(1.1);
    Complex S3(x, y);

    cout << S1.abscomplex() << endl;
    cout << fixed << setprecision(4);    
    cout << S2.abscomplex() << endl;
    cout << S3.abscomplex() << endl;
    
    return 0;
}

/*
    1. Complex S1;
    2. ~Complex() {} 或者也可以直接删掉
    3. 输出: cout << fixed << setprecision(4);
*/
