#pragma once
#include "A.h"
namespace Project2
{
	ref class B : public A
	{
	public:
		B(double b, double t, double h) : A(b, t)
		{
			height = new double;
			*height = h;
		}

		void set(double b, double t, double h);

		double calculate();

		~B() {
			delete bottomWidth;
			delete topWidth;
			delete height;
		}
	
	public:
		double* height;
	};
}

