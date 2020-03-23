#include <iostream>

class Complex{
	private:
	
	       double _real;
	       double _imag;

	public:
	   Complex();
	   Complex(double real, double imag);
	   Complex(const Complex &point);
	    
	   
	   double get_real() const;
	   double get_imag() const;

       void print_func();

	   Complex Add(Complex x);
	   Complex Sub(Complex x);
	   Complex Mult(Complex x);
	   Complex Div(Complex x);
	   Complex Conj();

	   double Mag();
	   double Phase();

	   Complex operator+(Complex z);
	   Complex operator-(Complex z);
	   Complex operator*(Complex z);
	   Complex operator/(Complex z);
	   Complex operator=(Complex z);

		std::ostream& operator << (std::ostream &out, const Complex &z);
		std::istream& operator >> (std::istream &in, Complex &z);

};
