#include <stdio.h>
#include <locale.h>
#include <math.h>
// A = b + cos^3(c * d * e /f)
double chi(double g, double h, double i) {
	return g * (1 + h / i);
}
double zna(double j, double k) {
	return j + k / 2;
}
double result(double l, double m, double n, double o, double p, double r, double s) {
	return l + pow(cos(m), 3) * chi(n, o, p) / zna(r, s);
}

void main() {
	double b, c, d, e, f, x, y, z;
	x = 6.251;
	y = 0.827;
	z = 25.001;
	b = pow(y, pow(fabs(x), 1. / 3));
	c = fabs(x - y);
	d = pow(sin(z), 2);
	e = sqrt(x + y);
	f = exp(fabs(x - y));
	printf("%.4lf", result(b, y, c, d, e, f, x));

}