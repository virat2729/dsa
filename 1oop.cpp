#include<iostream>
using namespace std;

class Complex
{
    double real,img;
    public:
    Complex();
    Complex operator +(Complex);
    Complex operator *(Complex);
    friend istream & operator >>(istream &, Complex &);
    friend ostream & operator <<(ostream &, const Complex &);
};

Complex::Complex()
{
    real=0;
    img=0;
}

Complex Complex::operator +(Complex c1)
{
    Complex temp;
    temp.real=real+c1.real;
    temp.img=img+c1.img;
    return temp;
}

Complex Complex::operator *(Complex c2)
{
    Complex temp;
    temp.real=real*c2.real-img*c2.img;
    temp.img=real*c2.img+img*c2.real;
    return temp;
}

istream & operator >>(istream &, Complex &i)
{
    cin>>i.real>>i.img;
    return cin;
}

ostream & operator <<(ostream &, const Complex &d)
{
    cout<<d.real<<"+"<<d.img<<"i";
    return cout;
}
int main()
{
    Complex c1,c2,c3,c4;
    int ch;
    cout<<"\nEnter real and imaginary part of first number: ";
    cin>>c1;

    cout<<"\nEnter real and imaginary part of second number: ";
    cin>>c2;
do{

 	cout<<"\n1.Addition.";
	cout<<"\n12.Multiplication";
	cout<<"\n3.Exit";
	cout<<"\nEnter choice: ";
	cin>>ch;   
	
	switch(ch)
	{
		case 1:
			c3=c1+c2;
			cout<<c3;
			break;
			
		case 2:
			c4=c1*c2;
			cout<<c4;
			break;	
	}
}while(ch!=3);
    return 0;
}


