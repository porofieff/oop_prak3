#ifndef POLINOME_H
#define POLINOME_H

#include "number.h"
#include "array.h"

enum PrintMode
{
    PrintModeClassic,
    PrintModeCanonic,
};

class Polinome
{
private:
    PrintMode mode;
    Array roots;
    Array coefficents;
    int N;
    void count_coefficents(number);
public:
    Polinome();
    Polinome(number, number[], int);

    friend ostream& operator<< (ostream&, Polinome&);
    friend istream& operator>> (istream&, Polinome&);

    void change_print_mode(PrintMode);
    void change_an(number);
    void change_roots(number, int);
    void change_size(int);

    number count_val(number);

};

#endif // POLINOME_H
