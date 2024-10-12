#ifndef COMPLEX_H
#define COMPLEX_H
#include <iostream>
#include <cmath>
using namespace std;


class complex
{
    double re, im;
public:
    complex();
    complex(double, double);

    complex operator*(complex);
    complex operator+(complex);
    complex operator-(complex);
    complex operator-();
    complex operator=(int);
    complex operator/(int);


   //complex operator-(complex);
    bool operator<(complex);
    bool operator>(complex);
    friend complex sqrt (complex);
    friend ostream& operator<<(ostream&, complex);
    friend istream& operator>>(istream&, complex&);

};

#endif // COMPLEX_H
