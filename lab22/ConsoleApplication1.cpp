// ConsoleApplication1.cpp: ������� ���� �������.

#include "stdafx.h"

#include <iostream>
#include "Zoo.h"

using namespace std;
using namespace Zoo;

int main() {
	Dog dog;
	Cat cat;
	int t;
	cout << "���������� �����: "; cin >> t; dog.add(t);
	cout << "���������� �����: "; cin >> t; cat.add(t);

	cout << endl;
	dog.print();
	cat.print();




	return 0;
