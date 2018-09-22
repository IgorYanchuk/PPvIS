#include "stdafx.h"
#include "ATM.h"
#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include <cstdio>

using namespace std;
using namespace Igor;

void ATM::read_base() {
	ifstream in(file_name);
	if (!in) {
		cout << "can't open file\n";
		return;
	}
	string log, pass;
	int count;

	while (!in.eof()) {
		in >> log >> pass >> count;
		inf.resize(inf.size() + 1);
		inf[inf.size() - 1].login = log;
		inf[inf.size() - 1].password = pass;
		inf[inf.size() - 1].count = count;
	}

}
void ATM::include_database(string file) {
	file_name = file;
}
int ATM::check_user(string loginn, string password) {

	for (int i = 0; i < inf.size(); i++) {
		if (inf[i].login == loginn && inf[i].password == password) {
			login = loginn;
			return 1;
		}
	}

	return 0;
}
int ATM::check_user(string password) {
	for (int i = 0; i < inf.size(); i++) {
		if (inf[i].login == login && inf[i].password == password) {
			return i;
		}
	}
	return -1;
}
int ATM::check_balance(string password) {
	int ind = check_user(password);
	if (ind == -1) return -1;
	else return inf[ind].count;
}
int ATM::inc_balance(string password, int sum) {
	int ind = check_user(password);
	if (ind == -1) return 0;
	else {
		inf[ind].count += sum;
		return 1;
	}
}
int ATM::dec_balance(string password, int sum) {
	int ind = check_user(password);
	if (ind == -1) return 0;
	else if (sum > inf[ind].count) return -1;
	else {
		inf[ind].count -= sum;
		return 1;
	}
}
int ATM::check_login(string login) {
	for (int i = 0; i < inf.size(); i++) {
		if (inf[i].login == login) {
			return i;
		}
	}
	return -1;
}
int ATM::translate_balance(string password, int sum, string new_log) {
	int ind = check_user(password);
	if (ind == -1) return 0;
	if (sum > inf[ind].count) return -1;
	int ind_new = check_login(new_log);
	if (ind_new == -1) return -2;
	else {
		inf[ind].count -= sum;
		inf[ind_new].count += sum;
		return 1;
	}
}
ATM::~ATM() {
	ofstream out(file_name);
	for (int i = 0; i < inf.size(); i++) {
		out << inf[i].login << " " << inf[i].password << " " << inf[i].count;
		if (i != inf.size() - 1) out << endl;
	}
	inf.clear();
}
void Window1::menue1() {
	cout << "Авторизация" << endl;
}
void Window1::go1() {
	string login, password;
	menue1();
	cout << "Номер карты: ";
	cin >> login;
	cout << "Пароль: ";
	cin >> password;
	if (check_user(login, password) == 1) return;
	else {
		cout << "Данная картра отсутствует в банке! Повторите ввод!" << endl;;
		go1();
	}
}
void Window::go() {
	while (2 == 2) {
		go1();
		string password, new_log;
		int q, balance, sum;
		int flag = 0;
		int t = 0;
		while (flag == 0) {
			menue1();
			cin >> q;
			switch (q) {
			case 1:
				cout << "Повторите ваш пароль:";
				cin >> password;
				balance = check_balance(password);
				if (balance == -1)  cout << "Неверный пароль!" << endl;
				else cout << "Баланс = " << balance << endl;
				break;
			case 2:
				cout << "Введите сумму для пополнения: ";
				cin >> sum;
				cout << "Повторите ваш пароль:";
				cin >> password;
				if (inc_balance(password, sum) == 0) cout << "Неверный пароль!" << endl;
				else cout << "Операция успешно выполнена!" << endl;
				break;
			case 3:
				cout << "Введите сумму для списывания: ";
				cin >> sum;
				cout << "Повторите ваш пароль:";
				cin >> password;
				t = dec_balance(password, sum);
				if (t == 0) cout << "Неверный пароль!" << endl;
				else if (t == -1) cout << "Суммы не достаточно на счете!" << endl;
				else cout << "Операция успешно выполнена!" << endl;
				break;
			case 4:
				cout << "Введите сумму для перевода: ";
				cin >> sum;
				cout << "Введите номер счета для перевода:";
				cin >> new_log;
				cout << "Повторите ваш пароль:";
				cin >> password;
				t = translate_balance(password, sum, new_log);
				if (t == 0) cout << "Неверный пароль!" << endl;
				else if (t == -1) cout << "Суммы не достаточно на счете!" << endl;
				else if (t == -2)  cout << "Счет для перевода не зарегестрирован!" << endl;
				else cout << "Операция успешно выполнена!" << endl;
				break;
			case 0:
				flag = 1;
				break;
			}
		}
		cout << endl;
		cout << "1 - Продолжить" << endl;
		cout << "0 - Выход" << endl;
		cin >> q;
		if (q == 0) break;
	}
}
void Window::menue1() {
	cout << "1 - Проверить баланс" << endl;
	cout << "2 - Пополнить баланс" << endl;
	cout << "3 - Снять сумму со счета" << endl;
	cout << "4 - Перевести сумму на другой счет" << endl;
	cout << "0 - Выход" << endl;
	cout << "Ваш выбор: ";
}