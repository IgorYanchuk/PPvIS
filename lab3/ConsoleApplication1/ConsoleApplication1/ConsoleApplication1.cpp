// ConsoleApplication1.cpp: ������� ���� �������.

#include "stdafx.h"
#include <iostream> 
#include <cstdio>
#include <string>
#include "ATM.h"

using namespace std;
using namespace Igor;

Window bank;

int main(){
	setlocale(LC_ALL, "Russian");
	
	string name;
	cout << "������� �������� ����� � ����� ������: ";
	cin >> name;

	bank.include_database(name);
	bank.read_base();
	bank.go();
	
    return 0;
}
