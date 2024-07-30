#include "rational.h"

// Auxiliar functions, private
int mcd(int a, int b) {
	return ( b==0 ? a : mcd(b,a%b) );
}

// Initialize
Rational rational(int num, int den) {
	Rational r; r.num=num; r.den=den; return r;
}

// Input/output
void write(std::ostream& os, const Rational& r) {
	os<<r.num<<"/"<<r.den;
}

void read(std::istream& is, Rational& r) {
	int num, den; char dummy;
	is>>num>>dummy>>den;
	r = rational(num,den);
}

// Operations
Rational add(const Rational& r1, const Rational& r2) {
	return rational(
		r1.num*r2.den + r2.num*r1.den,
		r1.den*r2.den
	);
}

Rational sub(const Rational& r1, const Rational& r2) {
	return rational(
		r1.num*r2.den - r2.num*r1.den,
		r1.den*r2.den
	);
}

Rational mul(const Rational& r1, const Rational& r2) {
	return rational(
		r1.num*r2.num,
		r1.den*r2.den
	);
}

Rational div(const Rational& r1, const Rational& r2) {
	return rational(
		r1.num*r2.den,
		r1.den*r2.num
	);
}

//Zero check
bool is_zero(const Rational& r) {
	return r.num == 0;
}