#include "stdafx.h"
#include "Zoo.h"
using namespace Zoo;
using namespace std;

void Dog::add_dog(int kol) {
	value_dog = kol;
}
void Dog::print_dog() {
	cout << "���������� ����� = " << value_dog << endl;
}
void Cat::add_cat(int kol) {
	value_cat = kol;
}
void Cat::print_cat() {
	cout << "���������� ����� = " << value_cat << endl;
}
void Rhino::add_rhino(int kol) {
	value_rhino = kol;
}
void Rhino::print_rhino() {
	cout << "���������� ��������� = " << value_rhino << endl;
}
void Ostrich::add_ostrich(int kol) {
	value_ostrich = kol;
}
void Ostrich::print_ostrich() {
	cout << "���������� �������� = " << value_ostrich << endl;
}
void Penguin::add_penguin(int kol) {
	value_penguin = kol;
}
void Penguin::print_penguin() {
	cout << "���������� ��������� = " << value_penguin << endl;
}
void Parrot::add_parrot(int kol) {
	value_parrot = kol;
}
void Parrot::print_parrot() {
	cout << "���������� �������� = " << value_parrot << endl;
}
void Trout::add_trout(int kol) {
	value_trout = kol;
}
void Trout::print_trout() {
	cout << "���������� ������� = " << value_trout << endl;
}
void Salmon::add_salmon(int kol) {
	value_salmon = kol;
}
void Salmon::print_salmon() {
	cout << "���������� ������� = " << value_salmon << endl;
}
void Tartle::add_tartle(int kol) {
	value_tartle = kol;
}
void Tartle::print_tartle() {
	cout << "���������� ������� = " << value_tartle << endl;
}
void Frog::add_frog(int kol) {
	value_frog = kol;
}
void Frog::print_frog() {
	cout << "���������� ������� = " << value_frog << endl;
}
void Mammals::print_mammals() {
	cout << "���������� ������������� = " << value_mammals << endl;
}
void Birds::print_birds() {
	cout << "���������� ���� = " << value_birds << endl;
}
void Fishes::print_fishes() {
	cout << "���������� ��� = " << value_fishes << endl;
}
void Reptiles::print_reptiles() {
	cout << "���������� �������� = " << value_reptiles << endl;
}
void Amphibians::print_amphibians() {
	cout << "���������� ������� = " << value_amphibians << endl;
}
void Warm_blooded::print_warm_blooded() {
	cout << "���������� ������������ = " << value_warm_blooded << endl;
}
void Cold_blooded::print_cold_blooded() {
	cout << "���������� ������������� = " << value_cold_blooded << endl;
}
void Vertebrates::print_vertebrates() {
	cout << "���������� ����������� � �������� = " << value_vertebrates << endl;
}
void Animals::print_animals() {
	cout << "���������� ������� �������� = " << value_animals << endl;
}
void Animals::print_vertebrates() {
	cout << "���������� ����������� = " << value_vertebrates << endl;
}