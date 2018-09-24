#pragma once
class Element {
public:
	int a;
	Element() {};
	Element(int x): a(x) {};
	void add(int x) {
		a = x;
	}
	bool operator<(Element f) {
		if (a < f.a) return true;
		else return false;
	}
	void operator=(Element f) {
		a=f.a;
	}
	void operator++(int) {
		++a;
	}
	Element operator++() {
		++a;
		Element temp;
		temp.a = a;
		return temp;
	}
};