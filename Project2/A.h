#pragma once
#include <string>
using namespace std;
namespace Project2
{
	ref class A
	{
	public:
	
		A(int b, int t);
		A();
		void set(int b, int t);
		System::String^ info();
		~A();
		int* bottomWidth, * topWidth;
	};

}