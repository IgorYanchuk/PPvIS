// ConsoleApplication1.cpp: ������� ���� �������.

#include "stdafx.h"

#include <iostream>
#include "Zoo.h"

using namespace std;
using namespace Zoo;

int main() {
	setlocale(LC_ALL, "Russian");


	Animals animals;

	int t;
	cout << "���������� �����: "; cin >> t; animals.add_dog(t);
	cout << "���������� �����: "; cin >> t; animals.add_cat(t);
	cout << "���������� ���������: "; cin >> t; animals.add_rhino(t);
	cout << "���������� ��������: "; cin >> t; animals.add_ostrich(t);
	cout << "���������� ���������: "; cin >> t; animals.add_penguin(t);
	cout << "���������� ��������: "; cin >> t; animals.add_parrot(t);
	cout << "���������� �������: "; cin >> t; animals.add_trout(t);
	cout << "���������� �������: "; cin >> t; animals.add_salmon(t);
	cout << "���������� �������: "; cin >> t; animals.add_tartle(t);
	cout << "���������� �������: "; cin >> t; animals.add_frog(t);

	animals.update_mammals();

	cout << endl;
	animals.print_dog();
	animals.print_cat();
	animals.print_rhino();
	cout << endl;

	animals.update_birds();
	animals.print_ostrich();
	animals.print_penguin();
	animals.print_parrot();
	cout << endl;

	animals.update_fishes();
	animals.print_trout();
	animals.print_salmon();
	cout << endl;

	animals.update_reptiles();
	animals.print_tartle();
	cout << endl;

	animals.update_amphibians();
	animals.print_frog();
	cout << endl;
	

	animals.print_mammals();
	animals.print_birds();
	animals.print_fishes();
	animals.print_reptiles();
	animals.print_amphibians();
	cout << endl;

	animals.update_warm_blooded();
	animals.print_warm_blooded();
	animals.update_cold_blooded();
	animals.print_cold_blooded();
	cout << endl;

	animals.update_vertebrates();
	animals.print_vertebrates();
	cout << endl;

	animals.update_animals();
	animals.print_animals();

	return 0;
}