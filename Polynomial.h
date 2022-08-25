//
// Created by Anton Ratush on 31/07/2022.
//
#ifndef POLYNOMIAL_H_
#define POLYNOMIAL_H_

using namespace std;
class Polynomial
{
private:
    double *coeff;
    int degree;
    static int maxDegree;

public:
    Polynomial();
    explicit Polynomial(int);
    Polynomial(double [], int);
    ~Polynomial();
    void print() const;
    Polynomial &setCoeff(int, double);
    static int getMaxDegree();
    int getDegree(bool) const;
    int getDegree() const;
    double getCoeff(int) const;

};

#endif