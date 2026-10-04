#include <iostream>
using namespace std;
class Complex {
public:
int real, imag;
Complex()
{
this->real = 0;
this->imag = 0;
}
Complex(int r, int i)
{
this->real = r;
this->imag = i;
}
// Overloading (+) operator to perform addition of two distance object Call by reference
Complex operator+(Complex& c2)
{
// Create an object to return
Complex c3;
c3.real = this->real + c2.real;
c3.imag = this->imag + c2.imag;
// Return the resulting object
return c3;
}
};
// Driver Code
int main()
{
Complex c1(8, 9);
Complex c2(10, 2);
Complex c3;
// Use overloaded operator
c3 = c1 + c2;
cout << "\nTotal real & imag: " <<
c3.real << "'" << c3.imag;
return 0;
}