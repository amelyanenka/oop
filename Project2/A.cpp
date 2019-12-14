#include "A.h"
#include <string>
using std::string;
using namespace Project2;

A::A(double b, double t) {
	bottomWidth = new double;
	topWidth = new double;
	*bottomWidth = b;
	*topWidth = t;
}

A::A() {
	bottomWidth = new double;
	topWidth = new double;
	*bottomWidth = 0;
	*topWidth = 0;
}

void A::set(double b, double t) {

	*bottomWidth = b;
	*topWidth = t;
}

System::String^ A::info() {
	return gcnew System::String("Base A: " + *bottomWidth + ", Base B: " + *topWidth);
}


A::~A() {
}