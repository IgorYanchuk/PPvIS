#include "stdafx.h"
#include "Zoo.h"
using namespace Zoo;
using namespace std;

void Dog::add(int kol) {
	value = kol;
}
void Dog::print() {
	cout << "���������� ����� = " << value << endl;
}
void Cat::add(int kol) {
	value = kol;
}
void Cat::print() {
	cout << "���������� ����� = " << value << endl;
}
