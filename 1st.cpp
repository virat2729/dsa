/* Implement a class Complex which represents the Complex Number data type. Implement the 
following
1. Constructor (including a default constructor which creates the complex number 0+0i).
2. Overload operator+ to add two complex numbers.
3. Overload operator* to multiply two complex numbers.
4. Overload operators << and >> to print and read Complex Numbers */

#include<iostream>
using namespace std;

class Complex
{
    private:
    int real, imag;
    public:
    Complex()
    {
        real=0;
        imag=0;
    }

    Complex operator + (Complex const &obj)
    {
        Complex res;
        res.real = real + obj.real;
        res.imag = imag + obj.imag;
        return res;                                                              
    }

    Complex operator * (Complex const &obj)
    {
        Complex mul;
        mul.real = real * obj.real;
        mul.imag = imag * obj.imag;
        return mul;
    }

    friend ostream &operator << (ostream &out, Complex const &obj);
    friend istream &operator >> (istream &in, Complex &obj);

    void print()
    {
        cout << real << "+i" << imag << endl;
        cout << real << "*i" << imag << endl;   
    }
};
 
ostream &operator << (ostream &out, Complex const &obj)
{
    out << obj.real;
    out << "+i" << obj.imag;
    return out;
}

istream &operator >> (istream &in, Complex &obj)
{
    cout << "Enter real part: " << endl;
    in >> obj.real;
    cout << "Enter imag part: " << endl;
    in >> obj.imag;
    return in;
}

int main()
{
    Complex c1, c2, c3, c4;
    cout << "Enter the first number:" << endl;
    cin >> c1;
    cout << "\nEnter the second number:" << endl;
    cin >> c2;
    cout << "The first complex number is: " << c1 << endl;
    cout << "The second complex number is: " << c2 << endl;
    c3 = c1 + c2;
    c4 = c1 * c2;
    cout << "The addition of two complex numbers is: " << c3 << endl;
    cout << "The multiplication of two complex numbers is: " << c4 << endl;
    return 0;
} 
