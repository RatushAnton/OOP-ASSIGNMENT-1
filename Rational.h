//
// Created by Anton Ratush on 31/07/2022.
//

#ifndef RATIONAL_H
#define RATIONAL_H
#include "Polynomial.h"


class Rational
{
private:
    Polynomial nom, denom;

public:
    Rational();
    Rational(const Polynomial&, const Polynomial&);
    Polynomial &getNom();
    Polynomial &getDenom();
    void print();
};

#endif //RATIONAL_H
