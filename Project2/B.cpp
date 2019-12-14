#include "B.h"
using namespace Project2;

void B::set(double b, double t, double h) {
	*bottomWidth = b;
	*topWidth = t;
	*height = h;
}

double B::calculate() {
	return *height * (*bottomWidth + *topWidth) / 2;
}