#pragma once

#include <iostream>

struct Rational {
   int num, den;
};


Rational rational(int num = 0, int den = 1);

// Input/output

void write(std::ostream& os, const Rational& r);
void read(std::istream& is,Rational& r);

// Operaciones aritmeticas

Rational add(const Rational& r1, const Rational& r2);
Rational sub(const Rational& r1, const Rational& r2);
Rational mul(const Rational& r1, const Rational& r2);
Rational div(const Rational& r1, const Rational& r2);

// Zero check
bool is_zero(const Rational& r);

