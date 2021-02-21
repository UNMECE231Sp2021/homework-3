#include <iostream>
#include <cmath>

class Complex {
	private:
		// Feel free to edit _real, _imag to whatever variable you want
		double _real;
		double _imag;

	public:
		Complex();

		// Feel free to edit real, imag to whatever variable you want
		Complex(double real, double imag);

		// Feel free to edit c to whatever variable you want
		Complex(const Complex &c);

		// Setter declarations
		void set_real(double r);
		void set_imag(double i);

		void print_polar();

		Complex add(const Complex &c);
		Complex mult(const Complex &c);

		Complex conj();

		double mag();
		double phase();

		Complex operator-(const Complex &c);
		Complex operator/(Complex &c);

		Complex &operator=(const Complex c);

		friend std::ostream &operator<<(std::ostream &out, const Complex &c);
};
