#include <iostream>
#include <string>
#include "Pollution.h"

using namespace std;

int main() {

	Pollution california;
	string city;
	int num;

	cout << "Enter the Locality Name: "; getline(cin, city);
	cout << "Enter the 8-hour mean level of ozone in micrograms/cubic meter: "; cin >> num;
	cout << endl;

	california.setName(city);
	california.setMean(num);
	california.setRating();
	california.Print();
