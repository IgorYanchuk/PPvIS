#pragma once
#include <iostream>
using namespace System;

namespace Zoo {

	class Dog {
	protected:
		int value;
	public:
		void add(int kol);
		void print();
	};
	class Cat {
	protected:
		int value;
	public:
		void add(int kol);
		void print();
	};
}
