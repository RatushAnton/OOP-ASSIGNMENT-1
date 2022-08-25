//
// Created by Anton Ratush on 31/07/2022.
//

#include <iostream>
#include "Rational.h"

Rational::Rational() : nom(), denom(0)
{
    denom.setCoeff(0, 1);
}
Rational::Rational(const Polynomial &p1, const Polynomial &p2)
{
    nom = p1;
    denom = p2;
}

Polynomial &Rational::getDenom()
{
    return denom;
}

Polynomial &Rational::getNom()
{
    return nom;
}

void Rational::print()
{
    nom.print();
    cout << "--------------------------" <<endl;
    denom.print();
}
