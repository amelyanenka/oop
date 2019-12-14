#pragma once
#include <string>
using namespace std;
namespace Project2
{
	ref class A
	{
	public:
	
		A(double b, double t);
		A();
		void set(double b, double t);
		System::String^ info();
		~A();
		double* bottomWidth, * topWidth;
	};

}