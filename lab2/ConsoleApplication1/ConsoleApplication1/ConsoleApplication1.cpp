// ConsoleApplication1.cpp: главный файл проекта.

#include "stdafx.h"

#include <iostream>
#include "Zoo.h"

using namespace std;
using namespace Zoo;

int main() {
	setlocale(LC_ALL, "Russian");


	Animals animals;

	int t;
	cout << "Количество собак: "; cin >> t; animals.add_dog(t);
	cout << "Количество котов: "; cin >> t; animals.add_cat(t);
	cout << "Количество носорогов: "; cin >> t; animals.add_rhino(t);
	cout << "Количество страусов: "; cin >> t; animals.add_ostrich(t);
	cout << "Количество пингвинов: "; cin >> t; animals.add_penguin(t);
	cout << "Количество попугаев: "; cin >> t; animals.add_parrot(t);
	cout << "Количество форелей: "; cin >> t; animals.add_trout(t);
	cout << "Количество лососей: "; cin >> t; animals.add_salmon(t);
	cout << "Количество черепах: "; cin >> t; animals.add_tartle(t);
	cout << "Количество лягушек: "; cin >> t; animals.add_frog(t);

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