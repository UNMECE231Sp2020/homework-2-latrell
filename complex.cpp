#include <iostream>
#include "func.hpp"


Complex::Complex() {
	_real = 0;
	_imag = 0;
}

Complex::Complex (double real, double imag) {
	_real = real;
	_imag = imag;
}

Complex::Complex (const Complex &point) {
	_real = point._real;
	_imag = point._imag;
}

double Complex::get_real() const {
	return _real;
}

double Complex::get_imag() const {
	return _imag;
}

void Complex::print_func() {
	if (_imag < 0) {
		std::cout << _real << "+" << -1* _imag << "x" << std::endl;
	}
	else {
		std::cout << _real << "-" << _imag << "x" << std::endl;
	}
}

double Complex::Mag() {
	double y = sqrt((_real * _real) * (_imag * _imag);
	return y;
}

double Complex::Phase() {
	double ph = atan(_imag/_real);
	ph = ph * (180/M_PI);
	return (ph < 0) ? -ph :ph;
}

//TODO: Missing return type
Complex::Conj() {
	Complex y;
	y._imag *= -1;
	return y;
}

//TODO: Missing return type
Complex::Add(Complex x) {
	Complex y;
	y._real = _real + x._real;
	y._imag = _imag + x._imag;
	return y;
}

//TODO: Missing return type
Complex::Sub(Complex x) {
	Complex y;
	y._real = _real - x._real;
	y._imag = _imag - x._imag;
	return y;
}

//TODO: Missing return type
Complex::Mult(Complex x) {
	y._real = x._real * _real - x._imag * _imag;
	y._imag = x._imag * _imag - x._real * _real;
	return y;
}

//TODO: Missing return type
Complex::Div(Complex x) {
	double denom = x.mag * x.mag;
	if (denom == 0) {
		std::cout << "You cannot divide by 0" << std::endl;
	}
	Complex y = Mult(x.Conj());
	y._real = y._real/denom;
	y._imag = y._imag/denom;
}

Complex Complex::operator+(Complex z) {
	Complex Solution(Add(z));
	return Solution;
}

Complex Complex::operator-(Complex z) {
	Complex Solution(Sub(z));
	return Solution;
}

Complex Complex::operator*(Complex z) {
	Complex Solution(Mult(z));
	return Solution;

Complex Complex ::operator/(Complex z) {
	Complex Solution(Div(z));
	return Solution;
}

Complex Complex::operator=(Complex z) {
	Complex y;
	y._real = z._real;
	y._imag = z._imag;
	return y;
}

std::ostream &operator <<(std::ostream &out, const Complex &z) {
	out << z._real << " " << z._imag;
	return out;
}

std::istream &operator >>(std::istream &in, Complex &z) {
	in >> z._real >> z._imag;
	return in;
}



