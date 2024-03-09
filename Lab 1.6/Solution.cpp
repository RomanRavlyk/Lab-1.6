#include <iostream>
#include <string>
#include "Solution.h"

using namespace std;

void Solution::Read() {
	Solution::Liquid s;
	cout << endl;
	cout << "Liquid = ? " << endl;
	s.Read();
	int Am;
	cout << "Amount = ? " << endl;

	cin >> Am;
	Init(Am, s);

}

void Solution::Display() const {
	cout << "Amount: " << getAmount() << endl;
	cout << "Liquid: "; liquid.Display(); cout << endl;
}

void Solution::Init(int amount, Liquid liquid) {
	setAmount(amount);
	setLiquid(liquid);
}

string Solution::toString() {
	cout << "Amount string: ";
	return to_string(amount);
}

void Solution::Liquid::setDen(int value) {
	density = value;
}

void Solution::Liquid::setName(string value) {
	name = value;
}

void Solution::Liquid::Read() {
	string x;
	int y;
	cout << "Enter Liquid name: "; cin >> x;
	cout << "Enter Liquid density: "; cin >> y;
	if (Init(x, y)) { setName(x); setDen(y); }
}

bool Solution::Liquid::Init(string value, int Den) {
	if (value.length() > 0 && Den > 0) {
		return true;
	}
}

void Solution::Liquid::Display() const {
	cout << "Liquid name: " << getName() << endl;
	cout << "Liquid density: " << getDensity() << endl;
}

string Solution::Liquid::toString() {
	cout << "Density of Liquid: ";
	return to_string(density);
}