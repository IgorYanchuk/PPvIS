// ConsoleApplication1.cpp: главный файл проекта.

#include "stdafx.h"

#include <iostream>
#include "Zoo.h"

using namespace std;
using namespace Zoo;

int main() {
	Dog dog;
	Cat cat;
	int t;
	cout << "Количество собак: "; cin >> t; dog.add(t);
	cout << "Количество котов: "; cin >> t; cat.add(t);

	cout << endl;
	dog.print();
	cat.print();




	return 0;
