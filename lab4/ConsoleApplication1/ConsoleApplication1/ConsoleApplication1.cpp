// ConsoleApplication1.cpp: главный файл проекта.

#include "stdafx.h"
#include <vector>
#include <iostream>
#include "lib.h"
using namespace std;

template < typename T >
void my_swap(T & x, T & y) //T - тип, указанный в параметре шаблона
{
	T t=x;   	    	
	x = y;     
	y = t;
}
    
template < class ElementType > 
void insertSort(ElementType * mas, int count)
{
	int i, j;
	for (i = 1; i <= count - 1; i++) {
		j = i;
		while (mas[j] < mas[j - 1] && j >= 1) {
			my_swap(mas[j], mas[j - 1]);
			j--;
			if (j == 0) break;
		}
	}
}

template < typename ElementType >
vector <ElementType> insertSort(vector <ElementType> mas, int count)
{
	int i, j;

	for (i = 1; i <= count - 1; i++) {
		j = i;
		while (mas[j] < mas[j - 1]) {
			my_swap(mas[j], mas[j - 1]);
			j--;
			if (j == 0) break;
		}
	}

	return mas;
}

template < typename ElementType >
void counting_sort(ElementType* vec, int len)
{
	int min = 0;
	int max = 10000;

	ElementType * cnt = new int[max - min + 1];

	for (int i = min; i <= max; ++i)
		cnt[i - min] = 0;

	for (int i = 0; i < len; ++i)
		++cnt[vec[i] - min];

	for (int i = min; i <= max; ++i)
		for (int j = cnt[i - min]; j--;)
			*vec++ = i;

	delete[] cnt;
}

template < typename ElementType >
vector <ElementType> counting_sort(vector <ElementType> vec, int len)
{
	int min = 0;
	int max = 10000;

	vector <ElementType> cnt;
	cnt.resize(max - min + 1);

	for (int i = min; i <= max; ++i)
		cnt[i - min] = 0;

	for (int i = 0; i < len; ++i)
		++(cnt[vec[i].a - min]);

	int k = 0;
	for (int i = min; i <= max; ++i)
		for (int j = cnt[i - min].a; j--;) {
			vec[k] = i;
			k++;
		}
			

	cnt.clear();
	return vec;
}

template < typename ElementType >
void out_array(const ElementType * arr, int arrSize)
{
	for (int i = 0; i < arrSize; ++i)
		std::cout << arr[i].a << ' ';
	std::cout << std::endl;
}
template < typename ElementType >
void out_array(vector <ElementType> arr, int arrSize)
{
	for (int i = 0; i < arrSize; ++i)
		std::cout << arr[i].a << ' ';
	std::cout << std::endl;
}


int main()
{
	vector<Element> mass1;
	vector<Element> mass2;
	Element mass3[1000], mass4[1000];
		
	int m1,q;
	cin >> m1;
	for (int i = 0; i < m1; i++) {
		cin >> q;
		mass1.push_back(q);
	}

	mass1 = counting_sort(mass1, m1);
	out_array(mass1, m1);
	cout << endl;


	cin >> m1;
	for (int i = 0; i < m1; i++) {
		cin >> q;
		mass2.push_back(q);
	}

	mass2 = insertSort(mass2, m1);
	out_array(mass2, m1);
	cout << endl;


	cin >> m1;
	for (int i = 0; i < m1; i++) {
		cin >> q;
		mass3[i] = q;
	}
	insertSort(mass3, m1);
	out_array(mass3, m1);
	cout << endl;


	cin >> m1;
	for (int i = 0; i < m1; i++) {
		cin >> q;
		mass4[i] = q;
	}
	insertSort(mass4, m1);
	out_array(mass4, m1);
	cout << endl;


}