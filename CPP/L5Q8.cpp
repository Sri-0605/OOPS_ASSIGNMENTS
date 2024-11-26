#include <iostream>

using namespace std;

class Complex {
    private:
        double real;
        double imag;
    public:
        Complex(double r = 0, double i = 0) : real(r), imag(i) {}

        inline Complex multiply(const Complex& c) {
            return Complex(real * c.real - imag * c.imag, real * c.imag + imag * c.real);
        }

        inline void display() {
            cout << real << " + " << imag << "i" << endl;
        }
};

int main() {
    Complex c1(3, 4);
    Complex c2(2, 5);

    cout << "Complex Number 1: ";
    c1.display();

    cout << "Complex Number 2: ";
    c2.display();

    Complex c3 = c1.multiply(c2);

    cout << "Product: ";
    c3.display();

    return 0;
}