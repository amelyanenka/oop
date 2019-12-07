#pragma once
#include "A.h"
namespace Project2
{
	ref class B : public A
	{
	public:
		B(int b, int t, int h) : A(b, t)
		{
			height = new int;
			*height = h;
		}

		void set(int b, int t, int h);

		int calculate() {
			return *height * (*bottomWidth + *topWidth) / 2;
		}

		~B() {
			delete bottomWidth;
			delete topWidth;
			delete height;
		}
	
	public:
		int* height;
	};
}

