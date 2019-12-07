#include "A.h"
#include <string>
using std::string;
using namespace Project2;

A::A(int b, int t) {
	bottomWidth = new int;
	topWidth = new int;
	*bottomWidth = b;
	*topWidth = t;
}

A::A() {
	bottomWidth = new int;
	topWidth = new int;
	*bottomWidth = 0;
	*topWidth = 0;
}

void A::set(int b, int t) {

	*bottomWidth = b;
	*topWidth = t;
}

System::String^ A::info() {
	return gcnew System::String("Base A: " + *bottomWidth + ", Base B: " + *topWidth);
}


A::~A() {
}